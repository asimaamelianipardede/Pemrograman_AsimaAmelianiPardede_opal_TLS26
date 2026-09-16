Pemrograman_AsimaAmelianiPardede_Opal_TLS26
📌 Identitas
Nama Lengkap: Asima Ameliani Pardede
Kelompok: Opal
Program: Luminous Quest - Pemrograman Dasar (TLS 2026)
📖 Deskripsi Repository

Repository ini berisi hasil pengerjaan tugas Luminous Quest - Pemrograman Dasar (TLS 2026). Tugas ini terdiri dari dua fase: fase pertama berfokus pada perancangan logika penyelesaian masalah (pseudocode & flowchart), dan fase kedua berfokus pada implementasi logika tersebut ke dalam bahasa pemrograman C++.

Terdapat dua problem yang diselesaikan pada tugas ini, yaitu The Last Astronaut dan Alien-In-The-Middle.

🗂️ Struktur File
├── Fase1_AsimaAmelianiPardede.pdf   # Pseudocode, flowchart & penjelasan logika
├── TheLastAstronaut.cpp             # Implementasi Problem 1
├── AlienInTheMiddle.cpp             # Implementasi Problem 2
└── README.md
🚀 Fase 1 — Logika Penyelesaian Masalah

File PDF (Fase1_AsimaAmelianiPardede.pdf) berisi nama & kelompok, serta pseudocode/flowchart beserta penjelasan logika (minimal 2 paragraf) untuk masing-masing problem.

Problem 1: The Last Astronaut

Sejumlah astronot berdiri membentuk lingkaran dengan nomor unik 1 hingga N. Proses eliminasi dilakukan secara berulang menggunakan penghitungan sebanyak K, dimulai dari astronot nomor 1. Astronot yang mendapat hitungan ke-K akan dieliminasi, dan penghitungan berikutnya dilanjutkan dari astronot tepat setelah posisi yang dieliminasi.

Nilai K bersifat dinamis dan berubah setiap kali terjadi eliminasi:

Jika nomor astronot yang dieliminasi genap → K bertambah 2
Jika nomor astronot yang dieliminasi ganjil → K berkurang 1
Nilai K tidak boleh kurang dari 2 (jika hasil perubahan < 2, maka K = 2)

Proses berulang hingga hanya tersisa satu astronot. Output program berupa urutan lengkap astronot yang dieliminasi serta astronot terakhir yang bertahan.

Problem 2: Alien-In-The-Middle

Problem ini merupakan sistem penyandian pesan (cipher) berbasis pergeseran huruf. Huruf pertama pada pesan tidak mengalami perubahan, sedangkan setiap huruf berikutnya digeser sejumlah nilai posisi alfabet dari huruf sebelum proses penyandian (bukan huruf hasil sandi). Nilai posisi huruf mengikuti A = 1, B = 2, ..., Z = 26, dan apabila hasil pergeseran melewati Z, perhitungan kembali dimulai dari A (dengan kata lain menggunakan operasi modulo 26).

Contoh: pesan ALIENS akan disandikan menjadi AMUNSG mengikuti aturan pergeseran kumulatif tersebut. Program dibuat agar dapat melakukan proses penyandian ini secara otomatis untuk pesan apa pun yang dimasukkan.

💻 Fase 2 — Implementasi Program C++

Solusi dari Fase 1 diimplementasikan ke dalam dua file .cpp terpisah:

File	Deskripsi
TheLastAstronaut.cpp	Mensimulasikan proses eliminasi astronot sesuai aturan sistem K dinamis, lalu menampilkan urutan eliminasi dan astronot yang bertahan terakhir.
AlienInTheMiddle.cpp	Menyandikan pesan input menggunakan sistem sandi geser berbasis huruf sebelumnya.
Ketentuan Implementasi
Hanya menggunakan library iostream.
Tidak menggunakan function bawaan dari library lain — seluruh function dibuat secara manual (user-defined function).

Program akan meminta input sesuai kebutuhan masing-masing problem (misalnya jumlah astronot dan nilai K awal untuk Problem 1, atau pesan yang ingin disandikan untuk Problem 2), lalu menampilkan hasil output di layar.
