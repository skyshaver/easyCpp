using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using Newtonsoft.Json;

namespace testsToJson
{
    class Program
    {
        public static int IdxOfFirstLetter(string str)
        {
            var alphabet = "abcdefghijklmnopqrstuvwxyz".ToCharArray();
            return str.IndexOfAny(alphabet);
        }
        static void Main(string[] args)
        {
            string path = @"/Users/skyshaver/Development/easyCpp/codingbat/warm_up_1.cpp";
            List<TestModel> testModels = new();
            using(StreamReader fs = new StreamReader(path))
            {
                string line, title = "", question = "", examples = "";
                bool firstLine = true;
                bool isExample = false;                
                while((line = fs.ReadLine()) != null)
                {
                    if(line.Length < 2)
                    {
                        firstLine = true;
                        isExample = false;
                        continue;  
                    } 
                    if(line.Substring(0, 2) == @"//")
                    {                        
                        if(firstLine)
                        {
                            System.Console.WriteLine($"Title: {line.Substring(IdxOfFirstLetter(line))}");                            
                            title = line.Substring(IdxOfFirstLetter(line));
                            firstLine = false;
                        }
                        else if(line =="// ** Examples **")
                        {
                            isExample = true;
                        }
                        else if(isExample)
                        {                            
                            System.Console.WriteLine($"Example: {line.Substring(IdxOfFirstLetter(line))}");
                            examples += line.Substring(IdxOfFirstLetter(line));
                        }
                        else
                        {
                            System.Console.WriteLine($"Question: {line.Substring(IdxOfFirstLetter(line))}");
                            question += line.Substring(IdxOfFirstLetter(line));
                        }
                    }
                    if(line.Last() == ')')
                    {
                        System.Console.WriteLine($"Function Sig: {line.Substring(IdxOfFirstLetter(line))}");
                        testModels.Add(new TestModel(
                            Guid.NewGuid(), title, question, examples, 
                            line.Substring(IdxOfFirstLetter(line)), "Easy")
                            );
                        title = ""; question = ""; examples = "";
                    }

                }
            }
            System.Console.WriteLine($"Final Count: {testModels.Count}");
            File.WriteAllText("test.json", JsonConvert.SerializeObject(testModels, Formatting.Indented));
        }
    }
}
