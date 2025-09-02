using TMPro;
using UnityEngine;

namespace Watermelon
{
    public class ScoreController : MonoBehaviour
    {
        public static ScoreController instance;

        void Awake()
        {
            instance = this;
        }

        public int totalScore;
        public TextMeshProUGUI textTotalScore;

        public void AddScore(int score)
        {
            int tempScore = PlayerPrefs.GetInt("TotalScore");
            totalScore = tempScore;
            totalScore += score;
            Debug.Log(totalScore);
            PlayerPrefs.SetInt("TotalScore", totalScore);

            textTotalScore.text = totalScore.ToString();
        }

        // Start is called once before the first execution of Update after the MonoBehaviour is created
        void Start() { }

        // Update is called once per frame
        void Update() { }
    }
}
