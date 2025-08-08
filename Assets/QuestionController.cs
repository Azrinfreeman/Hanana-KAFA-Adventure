using System.Collections.Generic;
using UnityEngine;

namespace Watermelon
{
    public class QuestionController : MonoBehaviour
    {
        [System.Serializable]
        public class Level
        {
            public List<SetQuestion> questions;
        }

        public List<Level> level;

        [System.Serializable]
        public class SetQuestion
        {
            public string question;
            public List<string> jawapan;
        }

        // Start is called once before the first execution of Update after the MonoBehaviour is created
        void Start() { }

        // Update is called once per frame
        void Update() { }
    }
}
