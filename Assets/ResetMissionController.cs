using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Watermelon.AI;

namespace Watermelon
{
    public class ResetMissionController : MonoBehaviour
    {
        public static ResetMissionController instance;

        void Awake()
        {
            instance = this;
        }

        public int firstTime;
        public string CurrentPlayer_;
        public string CurrentPlayerid_;
        public int PlayerTotal;

        public int CurrentPlayerNo_;

        public List<string> Player_;
        public List<string> Playerid_;

        public List<string> StarsCollected_;

        // Start is called once before the first execution of Update after the MonoBehaviour is created
        void Start() { }

        // Update is called once per frame
        void Update() { }

        IEnumerator resetting()
        {
            firstTime = PlayerPrefs.GetInt("FirstTime");
            CurrentPlayer_ = PlayerPrefs.GetString("CurrentPlayer_");
            CurrentPlayerid_ = PlayerPrefs.GetString("CurrentPlayerid_");
            PlayerTotal = PlayerPrefs.GetInt("PlayerTotal");
            CurrentPlayerNo_ = PlayerPrefs.GetInt("CurrentPlayerNo_");

            //loop and store data
            for (int i = 0; i < 20; i++)
            {
                if (!string.IsNullOrEmpty(PlayerPrefs.GetString("Player_" + i)))
                {
                    Debug.Log("has key");
                    Player_.Add(PlayerPrefs.GetString("Player_" + i));
                    Playerid_.Add(PlayerPrefs.GetString("Playerid_" + i));
                    StarsCollected_.Add(PlayerPrefs.GetString("StarsCollected_" + i));
                }
                else
                {
                    i = 21;
                }
            }

            //delete all saved files
            PlayerPrefs.DeleteAll();
            SaveController.DeleteSaveFile();
            yield return new WaitForSeconds(1.2f);
            //reinit again
            PlayerPrefs.SetInt("FirstTime", 1);
            PlayerPrefs.SetString("CurrentPlayer_", CurrentPlayer_);
            PlayerPrefs.SetString("CurrentPlayerid_", CurrentPlayerid_);
            PlayerPrefs.SetInt("PlayerTotal", PlayerTotal);
            PlayerPrefs.SetInt("CurrentPlayerNo_", CurrentPlayerNo_);

            //loop and initaition
            for (int i = 0; i < 20; i++)
            {
                if (!string.IsNullOrEmpty(Player_[i]))
                {
                    PlayerPrefs.SetString("Player_" + i, Player_[i]);
                    PlayerPrefs.SetString("Playerid_" + i, Playerid_[i]);
                    PlayerPrefs.SetString("StarsCollected_" + i, StarsCollected_[i]);
                }
                else
                {
                    i = 21;
                }
            }
            yield return new WaitForSeconds(0.2f);
        }

        public void ResetLevel()
        {
            StartCoroutine(resetting());
        }
    }
}
