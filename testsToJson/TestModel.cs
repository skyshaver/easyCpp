using System;
using System.Collections.Generic;

namespace testsToJson
{
    class TestModel
    {        
        public enum DifficultyLevel
        {
            Easy,
            Medium,
            Hard, 
            Legendary
        }
        public Guid ID { get; set; }
        public string Title { get; set; }
        public string Question { get; set; }
        public string Examples { get; set; }
        public string FunctionSig {get; set; }
        public string Difficulty { get; set; }

        public TestModel(Guid id, string title, string question, string examples, string functionSig, string difficulty)
        {
            ID = id;
            Title = title;
            Question = question;
            Examples = examples;
            FunctionSig = functionSig;
            Difficulty = difficulty;
        }        
    }
}