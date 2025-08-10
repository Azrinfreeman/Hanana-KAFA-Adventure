using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Watermelon
{
    public class QuestionController : MonoBehaviour
    {
        [System.Serializable]
        public class Level
        {
            public List<SetQuestion> questions;
        }

        [System.Serializable]
        public class SetQuestion
        {
            public string question;
            public List<string> jawapan;
            public int answerOnButton;
        }

        public System.Random rnd = new System.Random();

        public int level;
        public List<Level> levels;
        public int questionNumber;
        public TextMeshProUGUI questionText;
        public List<Transform> buttonParents;

        // Start is called once before the first execution of Update after the MonoBehaviour is created
        void Start() { }

        // Update is called once per frame
        void Update() { }

        public void showQuestion()
        {
            StartCoroutine(showQuest());
        }

        IEnumerator showQuest()
        {
            //choose which index in the list to display the qeuestion
            questionNumber = rnd.Next(0, levels[level - 1].questions.Count);
            //display question

            //apply answer to button


            //apply wrong answer to any button
            yield return new WaitForSeconds(0.4f);
        }
    }
}
