using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.UI;

namespace Watermelon
{
    public class VolumeControl : MonoBehaviour
    {
        [Header("References")]
        public AudioMixer mixer;

        void Start() { }

        public void SetVolume(float sliderValue)
        {
            mixer.SetFloat("VolumeParams", Mathf.Log10(sliderValue) * 20);
        }

        public void SetSfx(float sliderValue)
        {
            mixer.SetFloat("SfxParam", Mathf.Log10(sliderValue) * 20);
        }
    }
}
