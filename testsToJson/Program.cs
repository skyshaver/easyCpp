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
                            title = line.Substring(IdxOfFirstLetter(line));
                            firstLine = false;
                        }
                        else if(line =="// ** Examples **")
                        {
                            isExample = true;
                        }
                        else if(isExample)
                        {                                                        
                            examples += line.Substring(IdxOfFirstLetter(line));
                        }
                        else
                        {                            
                            question += line.Substring(IdxOfFirstLetter(line));
                        }
                    }
                    if(line.Last() == ')')
                    {                        
                        testModels.Add(new TestModel(
                            Guid.NewGuid(), title, question, examples, 
                            line.Substring(IdxOfFirstLetter(line)), "Easy"
                            ));
                        title = ""; question = ""; examples = "";
                    }

                }
            }            
            File.WriteAllText("test.json", JsonConvert.SerializeObject(testModels, Formatting.Indented));
        }
    }
}
