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
        public Difficulty Diff { get; set; }

        TestModel(Guid id, string title, string question, string examples, Difficulty diff)
        {
            ID = id;
            Title = title;
            Question = question;
            Examples = examples;
            Diff = diff;
        }        

    }
}