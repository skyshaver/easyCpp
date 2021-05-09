using System;
using System.Collections.Generic;

namespace testsToJson
{
    class TestModel
    {
        public enum Difficulty
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
        public Difficulty Diff { get; set; }

        public TestModel(){}

        public TestModel(Guid id, string title, string question, string examples, Difficulty diff)
        {
            ID = id;
            Title = title;
            Question = question;
            Examples = examples;
            Diff = diff;
        }

        public void Clear()
        {
            ID = Guid.Empty;
            Title = "";
            Question = "";
            Examples = "";
            FunctionSig = "";
            Diff = default;
        }        

    }
}