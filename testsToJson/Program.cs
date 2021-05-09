using System;
using System.IO;
namespace testsToJson
{
    class Program
    {
        static void Main(string[] args)
        {
            string path = @"/Users/skyshaver/Development/easyCpp/codingbat/warm_up_1.cpp";
            using(StreamReader fs = new StreamReader(path))
            {
                string line;
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
                            System.Console.WriteLine($"Title: {line}");
                            firstLine = false;
                        }
                        else if(line =="// ** Examples **")
                        {
                            isExample = true;
                        }
                        else if(isExample)
                        {
                            System.Console.WriteLine($"Example: {line}");
                        }
                        else
                        {
                            System.Console.WriteLine($"Question: {line}");
                        }
                    }
                    if(line[line.Length - 1] == ')')
                    {
                        System.Console.WriteLine($"Function Sig: {line}");
                    }

                }
            }
        }
    }
}
