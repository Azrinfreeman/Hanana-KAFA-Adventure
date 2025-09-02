using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Watermelon
{
    public class QuestionClasses : MonoBehaviour
    {
        public static QuestionClasses instance;

        void Awake()
        {
            instance = this;
        }

        [System.Serializable]
        public class Question
        {
            public string question;
            public List<string> answerButton;
            public int AnswerOnButton;

            public Question(string question, List<string> answerButton, int AnswerOnButton)
            {
                this.question = question;
                this.answerButton = answerButton;
                this.AnswerOnButton = AnswerOnButton;
            }
        }

        [System.Serializable]
        public class Levels
        {
            public List<Question> questions = new List<Question>();
        }

        public int level;
        public List<Levels> levels;

        // Start is called before the first frame update
        void Start()
        {
            levels.AddRange(
                new List<Levels>
                {
                    //level 1 AKIDAH
                    new Levels
                    {
                        questions = new List<Question>
                        {
                            new Question(
                                "Malaikat yang bertugas menyampaikan wahyu kepada Nabi ialah..",
                                new List<string> { "Mikail", "Israfil", "Jibril", "Izrail" },
                                2
                            ),
                            new Question(
                                "Percaya kepada Malaikat adalah salah satu rukun iman yang..",
                                new List<string> { "kedua", "ketiga", "keempat", "kelima" },
                                1
                            ),
                            new Question(
                                "Nabi Ulul Azmi berjumlah..",
                                new List<string> { "3", "4", "5", "6" },
                                2
                            ),
                            new Question(
                                "Malik adalah..",
                                new List<string>
                                {
                                    "Nama salah seorang Malaikat pencabut nyawa",
                                    "Malaikat penjaga syurga",
                                    "Malaikat penjaga neraka",
                                    "Malaikat yang menyampaikan wahyu",
                                },
                                2
                            ),
                            new Question(
                                "Sifat wajib Allah yang bermaksud yang Maha Mengasihi ialah..",
                                new List<string>
                                {
                                    "Ar-Rahim",
                                    "As-Sami'",
                                    "Al-Ghaffar",
                                    "Al-Quddus",
                                },
                                0
                            ),
                            new Question(
                                "Rasul yang pertama ditutus ialah..",
                                new List<string>
                                {
                                    "Nabi Adam",
                                    "Nabi Nuh",
                                    "Nabi Ibrahim",
                                    "Nabi Muhammad",
                                },
                                0
                            ),
                            new Question(
                                "Sifat wajib Allah yang bermaksud tidak sama dengan makhluk ialah..",
                                new List<string>
                                {
                                    "Qidam",
                                    "Mukhalafah lil-tauradith",
                                    "Hayat",
                                    "Wahdaniyah",
                                },
                                1
                            ),
                            new Question(
                                "Rasul mempunyai sifat wajib iaitu, semua berikut kecuali..",
                                new List<string>
                                {
                                    "Al-Kalam (berbicara)",
                                    "Siddiq (benar)",
                                    "Amanah (dapat dipercaya)",
                                    "Jahil (bodoh)",
                                },
                                3
                            ),
                            new Question(
                                "Tugas Malaikat Israfil ialah..",
                                new List<string>
                                {
                                    "Mencabut nyawa",
                                    "Menjaga pintu Syurga & Neraka",
                                    "Meniup sangkakala pada Hari Kiamat",
                                    "Mencatat amalan manusia",
                                },
                                2
                            ),
                            new Question(
                                "Salah satu rukun iman adalah beriman kepada..",
                                new List<string>
                                {
                                    "Nabi sahaja",
                                    "Malaikat sahaja",
                                    "Nabi dan Malaikat sahaja",
                                    "Semua yang wajib dipercayai (Allah, Malaikat, Kitab, Rasul, Hari Akhir, Qada dan Qadar)",
                                },
                                3
                            ),
                            new Question(
                                "Sifat wajib Allah yang bermaksud Maha Mengetahui ialah..",
                                new List<string> { "Al-Alim", "Al-Basir", "Ar-Razzaq", "Al-Hakim" },
                                0
                            ),
                            new Question(
                                "Kitab terakhir yang diturunkan ialah..",
                                new List<string> { "Taurat", "Zabur", "Injil", "Al-Quran" },
                                3
                            ),
                            new Question(
                                "Nabi Ulul Azmi yang keempat ialah..",
                                new List<string>
                                {
                                    "Nabi Musa",
                                    "Nabi Isa",
                                    "Nabi Nuh",
                                    "Nabi Muhammad",
                                },
                                0
                            ),
                            new Question(
                                "Berdasarkan rukun iman, mempercayai Qada dan Qadar merupakan..",
                                new List<string>
                                {
                                    "Bagian dari syirik",
                                    "Wajib",
                                    "Sunat",
                                    "Makruh",
                                },
                                1
                            ),
                            new Question(
                                "Sifat wajib Allah yang bermaksud Maha Berkuasa ialah..",
                                new List<string>
                                {
                                    "Al-Qudrah",
                                    "Al-Wahhab",
                                    "Al-Muhyi",
                                    "Al-Latif",
                                },
                                0
                            ),
                            new Question(
                                "Tugas Malaikat Mikail ialah..",
                                new List<string>
                                {
                                    "Menyampaikan wahyu",
                                    "Menjaga pintu Neraka",
                                    "Meniup sangkakala",
                                    "Menurunkan rezeki",
                                },
                                3
                            ),
                            new Question(
                                "Al-Quddus bermaksud..",
                                new List<string>
                                {
                                    "Yang Maha Suci",
                                    "Yang Maha Kaya",
                                    "Yang Maha Mengetahui",
                                    "Yang Maha Melihat",
                                },
                                0
                            ),
                            new Question(
                                "Malaikat yang mencabut nyawa orang yang ingkar ialah..",
                                new List<string> { "Jibril", "Mikail", "Izrail", "Israfil" },
                                2
                            ),
                            new Question(
                                "Rasul salah satu sifat wajib rasul yang bermaksud selalu mengatakan benar ialah..",
                                new List<string> { "Siddiq", "Fatanah", "Amanah", "Tabligh" },
                                0
                            ),
                            new Question(
                                "Beriman kepada Rasul termasuk dalam rukun iman yang..",
                                new List<string> { "kedua", "ketiga", "keempat", "kelima" },
                                2
                            ),
                        },
                    },
                    //level 2 IBADAH
                    new Levels
                    {
                        questions = new List<Question>
                        {
                            new Question(
                                "Niat solat Subuh berbunyi: Ushalli fardha subhi rak'ataini ______ ta'ala.",
                                new List<string> { "lillahi", "billahi", "fillahi", "wallahi" },
                                0 // A
                            ),
                            new Question(
                                "Waktu solat Zohor bermula apabila...",
                                new List<string>
                                {
                                    "Matahari terbit",
                                    "Gelincir matahari dari tengah langit",
                                    "Matahari terbenam",
                                    "Waktu fajar",
                                },
                                1 // B
                            ),
                            new Question(
                                "Berapa rakaat solat Maghrib?",
                                new List<string> { "2", "3", "4", "5" },
                                1 // B
                            ),
                            new Question(
                                "Rukun Islam yang kedua ialah...",
                                new List<string> { "Puasa", "Solat", "Zakat", "Haji" },
                                1 // B
                            ),
                            new Question(
                                "Menghadap kiblat adalah...",
                                new List<string>
                                {
                                    "Sunat solat",
                                    "Syarat sah wuduk",
                                    "Syarat sah solat",
                                    "Rukun haji",
                                },
                                2 // C
                            ),
                            new Question(
                                "Berwuduk sebelum solat adalah...",
                                new List<string> { "Sunat", "Wajib", "Harus", "Makruh" },
                                1 // B
                            ),
                            new Question(
                                "Lafaz niat puasa Ramadan dimulakan dengan...",
                                new List<string>
                                {
                                    "Ushalli",
                                    "Bismillah",
                                    "Nawaitu",
                                    "Alhamdulillah",
                                },
                                2 // C
                            ),
                            new Question(
                                "Solat fardu yang mempunyai rakaat paling banyak ialah...",
                                new List<string> { "Subuh", "Maghrib", "Zohor", "Isyak" },
                                2 // C
                            ),
                            new Question(
                                "Waktu solat Isyak berakhir apabila...",
                                new List<string>
                                {
                                    "Masuk waktu Zohor",
                                    "Terbit matahari",
                                    "Masuk waktu Subuh",
                                    "Masuk waktu Maghrib",
                                },
                                2 // C
                            ),
                            new Question(
                                "Perkara yang membatalkan wuduk ialah...",
                                new List<string>
                                {
                                    "Tidur duduk",
                                    "Keluar hadas kecil",
                                    "Berjalan",
                                    "Makan",
                                },
                                1 // B
                            ),
                            new Question(
                                "Lafaz Allahu Akbar dalam solat disebut ketika...",
                                new List<string>
                                {
                                    "Rukuk",
                                    "Sujud",
                                    "Takbiratul ihram",
                                    "Tahiyat",
                                },
                                2 // C
                            ),
                            new Question(
                                "Mengangkat tangan ketika takbiratul ihram adalah...",
                                new List<string>
                                {
                                    "Sunat ab'adh",
                                    "Rukun solat",
                                    "Syarat sah solat",
                                    "Wajib haji",
                                },
                                0 // A
                            ),
                            new Question(
                                "Bacaan Al-Fatihah dalam solat adalah...",
                                new List<string>
                                {
                                    "Sunat hai'at",
                                    "Rukun solat",
                                    "Syarat sah solat",
                                    "Wajib puasa",
                                },
                                1 // B
                            ),
                            new Question(
                                "Melakukan tawaf di Kaabah adalah salah satu...",
                                new List<string>
                                {
                                    "Rukun puasa",
                                    "Rukun haji",
                                    "Rukun solat",
                                    "Rukun iman",
                                },
                                1 // B
                            ),
                            new Question(
                                "Lafaz Sami'allahu liman hamidah diucapkan ketika...",
                                new List<string>
                                {
                                    "Bangun dari sujud",
                                    "Bangun dari rukuk",
                                    "Duduk tahiyat",
                                    "Hendak salam",
                                },
                                1 // B
                            ),
                            new Question(
                                "Menutup aurat ketika solat adalah...",
                                new List<string> { "Sunat", "Harus", "Syarat sah solat", "Makruh" },
                                2 // C
                            ),
                            new Question(
                                "Membayar zakat fitrah dilakukan pada...",
                                new List<string>
                                {
                                    "Awal Ramadan",
                                    "Akhir Ramadan sebelum solat Aidilfitri",
                                    "Selepas solat Zohor",
                                    "Awal Muharam",
                                },
                                1 // B
                            ),
                            new Question(
                                "Waktu puasa Ramadan bermula dari...",
                                new List<string>
                                {
                                    "Terbit matahari",
                                    "Terbit fajar",
                                    "Gelincir matahari",
                                    "Masuk waktu Maghrib",
                                },
                                1 // B
                            ),
                            new Question(
                                "Bilangan rakaat solat Isyak ialah...",
                                new List<string> { "2", "3", "4", "5" },
                                2 // C
                            ),
                            new Question(
                                "Lafaz salam untuk mengakhiri solat adalah...",
                                new List<string>
                                {
                                    "Assalamualaikum warahmatullah",
                                    "Allahu Akbar",
                                    "Subhanallah",
                                    "Astaghfirullah",
                                },
                                0 // A
                            ),
                        },
                    },
                }
            );
        }

        // Update is called once per frame
        void Update() { }
    }
}
