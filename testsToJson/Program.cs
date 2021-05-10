using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using Newtonsoft.Json;

namespace testsToJson
{
    class Program
    {
        public static int FindFirstLetter(string str)
        {
            for(int i = 0; i < str.Length; i++)
            {
                if(char.IsLetter(str[i])) return i;
            }
            return -1;
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
                            System.Console.WriteLine($"Title: {line.Substring(FindFirstLetter(line))}");                            
                            title = line.Substring(FindFirstLetter(line));
                            firstLine = false;
                        }
                        else if(line =="// ** Examples **")
                        {
                            isExample = true;
                        }
                        else if(isExample)
                        {                            
                            System.Console.WriteLine($"Example: {line.Substring(FindFirstLetter(line))}");
                            examples += line.Substring(FindFirstLetter(line));
                        }
                        else
                        {
                            System.Console.WriteLine($"Question: {line.Substring(FindFirstLetter(line))}");
                            question += line.Substring(FindFirstLetter(line));
                        }
                    }
                    if(line.Last() == ')')
                    {
                        System.Console.WriteLine($"Function Sig: {line.Substring(FindFirstLetter(line))}");
                        testModels.Add(new TestModel(
                            Guid.NewGuid(), title, question, examples, 
                            line.Substring(FindFirstLetter(line)), "Easy")
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
