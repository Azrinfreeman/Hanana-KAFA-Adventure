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

        public void SetLevel(int levelNum)
        {
            level = levelNum;
        }

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
                                "Rasul yang pertama di utus ialah..",
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
                                    "Mukhalafatuhu lilhawadis",
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
                                "Salah satu sifat wajib rasul yang bermaksud selalu mengatakan benar ialah..",
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
                                "Niat solat Subuh berbunyi: Ushalli fardha subhi rak'ataini ______.",
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
                    new Levels
                    {
                        questions = new List<Question>
                        {
                            new Question(
                                "Nabi Muhammad ﷺ dilahirkan di...",
                                new List<string> { "Madinah", "Taif", "Makkah", "Syam" },
                                2 // C
                            ),
                            new Question(
                                "Tahun kelahiran Nabi Muhammad ﷺ dikenali sebagai...",
                                new List<string>
                                {
                                    "Tahun Haji",
                                    "Tahun Hijrah",
                                    "Tahun Gajah",
                                    "Tahun Perang Badar",
                                },
                                2 // C
                            ),
                            new Question(
                                "Ibu Nabi Muhammad ﷺ bernama...",
                                new List<string>
                                {
                                    "Aminah binti Wahab",
                                    "Siti Khadijah",
                                    "Halimatus Sa‘adiah",
                                    "Aisyah binti Abu Bakar",
                                },
                                0 // A
                            ),
                            new Question(
                                "Bapa Nabi Muhammad ﷺ bernama...",
                                new List<string>
                                {
                                    "Abu Talib",
                                    "Abdullah bin Abu Bakar",
                                    "Abdullah bin Abdul Muttalib",
                                    "Abdul Rahman bin Auf",
                                },
                                2 // C
                            ),
                            new Question(
                                "Datuk yang memelihara Nabi Muhammad ﷺ selepas kematian ibunya ialah...",
                                new List<string>
                                {
                                    "Abu Talib",
                                    "Abdul Muttalib",
                                    "Abbas bin Abdul Muttalib",
                                    "Hamzah bin Abdul Muttalib",
                                },
                                1 // B
                            ),
                            new Question(
                                "Nabi Muhammad ﷺ dibesarkan oleh ibu susuan bernama...",
                                new List<string>
                                {
                                    "Siti Khadijah",
                                    "Halimatus Sa‘adiah",
                                    "Fatimah binti Muhammad",
                                    "Zainab binti Jahsy",
                                },
                                1 // B
                            ),
                            new Question(
                                "Nama gua tempat Nabi Muhammad ﷺ menerima wahyu pertama ialah...",
                                new List<string>
                                {
                                    "Gua Tsur",
                                    "Gua Hira’",
                                    "Gua Uhud",
                                    "Gua Badar",
                                },
                                1 // B
                            ),
                            new Question(
                                "Wahyu pertama yang diturunkan kepada Nabi Muhammad ﷺ ialah surah...",
                                new List<string>
                                {
                                    "Al-Fatihah",
                                    "Al-Baqarah",
                                    "Al-‘Alaq ayat 1-5",
                                    "Al-Ikhlas",
                                },
                                2 // C
                            ),
                            new Question(
                                "Isteri pertama Nabi Muhammad ﷺ ialah...",
                                new List<string>
                                {
                                    "Aisyah binti Abu Bakar",
                                    "Hafsah binti Umar",
                                    "Khadijah binti Khuwailid",
                                    "Zainab binti Jahsy",
                                },
                                2 // C
                            ),
                            new Question(
                                "Peristiwa hijrah Nabi Muhammad ﷺ berlaku dari...",
                                new List<string>
                                {
                                    "Madinah ke Makkah",
                                    "Taif ke Makkah",
                                    "Makkah ke Madinah",
                                    "Syam ke Makkah",
                                },
                                2 // C
                            ),
                            new Question(
                                "Khalifah pertama selepas kewafatan Nabi Muhammad ﷺ ialah...",
                                new List<string>
                                {
                                    "Umar al-Khattab",
                                    "Abu Bakar as-Siddiq",
                                    "Uthman bin Affan",
                                    "Ali bin Abi Talib",
                                },
                                1 // B
                            ),
                            new Question(
                                "Peristiwa Isra’ dan Mikraj berlaku pada waktu Nabi...",
                                new List<string>
                                {
                                    "Muda",
                                    "Selepas menjadi Rasul",
                                    "Di Madinah",
                                    "Sebelum berkahwin",
                                },
                                1 // B
                            ),
                            new Question(
                                "Perang Badar berlaku pada tahun...",
                                new List<string> { "1 Hijrah", "2 Hijrah", "3 Hijrah", "4 Hijrah" },
                                1 // B
                            ),
                            new Question(
                                "Perang Uhud berlaku kerana...",
                                new List<string>
                                {
                                    "Perebutan harta",
                                    "Orang Quraisy ingin membalas dendam Perang Badar",
                                    "Perbezaan agama dengan Yahudi",
                                    "Ujian dari Allah",
                                },
                                1 // B
                            ),
                            new Question(
                                "Perang Khandaq dinamakan begitu kerana...",
                                new List<string>
                                {
                                    "Berlaku di lembah Khandaq",
                                    "Parit digali untuk mempertahankan Madinah",
                                    "Berdekatan sungai Khandaq",
                                    "Menggunakan senjata parit",
                                },
                                1 // B
                            ),
                            new Question(
                                "Tahun kesedihan bagi Nabi Muhammad ﷺ berlaku kerana...",
                                new List<string>
                                {
                                    "Nabi kehilangan anak lelaki",
                                    "Kematian isteri dan bapa saudaranya",
                                    "Kalah dalam Perang Uhud",
                                    "Larangan masuk ke Makkah",
                                },
                                1 // B
                            ),
                            new Question(
                                "Perjanjian Hudaibiyah berlaku pada tahun...",
                                new List<string> { "5 Hijrah", "6 Hijrah", "7 Hijrah", "8 Hijrah" },
                                1 // B
                            ),
                            new Question(
                                "Perang terakhir yang disertai Nabi Muhammad ﷺ ialah...",
                                new List<string>
                                {
                                    "Perang Badar",
                                    "Perang Uhud",
                                    "Perang Khandaq",
                                    "Perang Tabuk",
                                },
                                3 // D
                            ),
                            new Question(
                                "Nama unta yang membawa Nabi Muhammad ﷺ ketika hijrah ialah...",
                                new List<string> { "Buraq", "Qaswa", "Anbar", "Unta Putih" },
                                1 // B
                            ),
                            new Question(
                                "Tempat dimakamkan Nabi Muhammad ﷺ ialah...",
                                new List<string> { "Makkah", "Taif", "Madinah", "Syam" },
                                2 // C
                            ),
                        },
                    },
                    new Levels
                    {
                        questions = new List<Question>
                        {
                            new Question(
                                "Mengucapkan salam kepada orang lain adalah...",
                                new List<string> { "Harus", "Sunat", "Sunat muakkad", "Wajib" },
                                2 // C
                            ),
                            new Question(
                                "Apabila menerima salam, kita hendaklah...",
                                new List<string>
                                {
                                    "Diam sahaja",
                                    "Menjawab salam",
                                    "Berlalu pergi",
                                    "Menggeleng kepala",
                                },
                                1 // B
                            ),
                            new Question(
                                "Adab ketika makan ialah...",
                                new List<string>
                                {
                                    "Makan sambil bercakap kotor",
                                    "Membaca Bismillah sebelum makan",
                                    "Berebut makanan",
                                    "Mengotorkan meja",
                                },
                                1 // B
                            ),
                            new Question(
                                "Apabila bersin, kita disunatkan mengucap...",
                                new List<string>
                                {
                                    "Subhanallah",
                                    "Alhamdulillah",
                                    "Astaghfirullah",
                                    "InsyaAllah",
                                },
                                1 // B
                            ),
                            new Question(
                                "Apabila mendengar orang bersin mengucap 'Alhamdulillah', kita menjawab...",
                                new List<string>
                                {
                                    "Waalaikumussalam",
                                    "Yarhamukallah",
                                    "Barakallah",
                                    "Syafakallah",
                                },
                                1 // B
                            ),
                            new Question(
                                "Adab ketika berjumpa guru ialah...",
                                new List<string>
                                {
                                    "Memalingkan muka",
                                    "Memberi salam dan senyum",
                                    "Berjalan laju tanpa menegur",
                                    "Menunduk tanpa menyapa",
                                },
                                1 // B
                            ),
                            new Question(
                                "Menutup aurat ketika keluar rumah adalah...",
                                new List<string> { "Harus", "Makruh", "Wajib", "Sunat" },
                                2 // C
                            ),
                            new Question(
                                "Adab bercakap dengan ibu bapa ialah...",
                                new List<string>
                                {
                                    "Meninggikan suara",
                                    "Memotong percakapan mereka",
                                    "Bercakap dengan sopan",
                                    "Memalingkan muka",
                                },
                                2 // C
                            ),
                            new Question(
                                "Adab ketika menggunakan telefon ialah...",
                                new List<string>
                                {
                                    "Menjerit kuat",
                                    "Bercakap dengan suara sederhana",
                                    "Menggunakan ketika solat",
                                    "Tidak mematikan bunyi di masjid",
                                },
                                1 // B
                            ),
                            new Question(
                                "Adab masuk masjid ialah...",
                                new List<string>
                                {
                                    "Mendahulukan kaki kanan",
                                    "Mendahulukan kaki kiri",
                                    "Berlari masuk",
                                    "Menjerit di dalam",
                                },
                                0 // A
                            ),
                            new Question(
                                "Adab keluar masjid ialah...",
                                new List<string>
                                {
                                    "Mendahulukan kaki kiri",
                                    "Mendahulukan kaki kanan",
                                    "Melompat keluar",
                                    "Menutup mata",
                                },
                                0 // A
                            ),
                            new Question(
                                "Adab memohon maaf ialah...",
                                new List<string>
                                {
                                    "Menulis surat tanpa nama",
                                    "Dengan sopan dan rendah hati",
                                    "Meminta secara kasar",
                                    "Melalui orang lain sahaja",
                                },
                                1 // B
                            ),
                            new Question(
                                "Apabila menerima hadiah, kita hendaklah...",
                                new List<string>
                                {
                                    "Menolak dengan sombong",
                                    "Mengucapkan terima kasih",
                                    "Menjualnya",
                                    "Mengkritik hadiah itu",
                                },
                                1 // B
                            ),
                            new Question(
                                "Adab di jalan raya ialah...",
                                new List<string>
                                {
                                    "Menghalang laluan orang",
                                    "Berjalan di tepi kiri jalan",
                                    "Menjerit pada orang",
                                    "Duduk di tengah jalan",
                                },
                                1 // B
                            ),
                            new Question(
                                "Adab dengan jiran ialah...",
                                new List<string>
                                {
                                    "Menghormati dan membantu mereka",
                                    "Tidak bertegur sapa",
                                    "Mengumpat",
                                    "Mengambil barang tanpa izin",
                                },
                                0 // A
                            ),
                            new Question(
                                "Apabila menerima jemputan kenduri, kita digalakkan...",
                                new List<string>
                                {
                                    "Menghadirinya jika tiada halangan syarie",
                                    "Menolaknya tanpa alasan",
                                    "Menghadiri separuh masa",
                                    "Menghantar orang lain",
                                },
                                0 // A
                            ),
                            new Question(
                                "Adab menjaga kebersihan ialah...",
                                new List<string>
                                {
                                    "Membuang sampah di tempat yang disediakan",
                                    "Membuang sampah di merata tempat",
                                    "Menyembunyikan sampah",
                                    "Membakar sampah di dalam rumah",
                                },
                                0 // A
                            ),
                            new Question(
                                "Adab bermain ialah...",
                                new List<string>
                                {
                                    "Menjerit kuat",
                                    "Tidak mengganggu orang lain",
                                    "Memukul kawan",
                                    "Merosakkan barang",
                                },
                                1 // B
                            ),
                            new Question(
                                "Adab ketika makan bersama-sama ialah...",
                                new List<string>
                                {
                                    "Berebut makanan",
                                    "Mengambil makanan berhampiran dahulu",
                                    "Menarik pinggan orang",
                                    "Mengambil semua lauk",
                                },
                                1 // B
                            ),
                            new Question(
                                "Adab tidur ialah...",
                                new List<string>
                                {
                                    "Berwuduk sebelum tidur",
                                    "Tidur tanpa menutup lampu",
                                    "Tidur dengan pakaian kotor",
                                    "Tidur di tempat bising",
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
