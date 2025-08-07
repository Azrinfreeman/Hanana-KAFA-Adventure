using UnityEngine;

namespace Watermelon
{
    public class QuestionAssign : MonoBehaviour
    {
        public Transform questionController;

        // Start is called once before the first execution of Update after the MonoBehaviour is created
        void Start()
        {
            questionController = GameObject.Find("QuestionController").transform;
        }

        // Update is called once per frame
        void Update() { }

        public void Active()
        {
            questionController.gameObject.SetActive(true);
        }
    }
}
