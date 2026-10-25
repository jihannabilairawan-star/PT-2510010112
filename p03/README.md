# Pertemuan 3

## 1. SiNilai v0.2

Program membaca nama, NPM, kehadiran, nilai mingguan, UTS, dan UAS, kemudian menghitung nilai akhir menggunakan konstanta bobot.

Bobot yang digunakan:
- Kehadiran = 10%
- Mingguan = 20%
- UTS = 30%
- UAS = 40%

Program juga menampilkan rerata polos dan selisih antara nilai akhir berbobot dengan rerata polos.

Program dikompilasi menggunakan:

`g++ -Wall -Wextra -pedantic sinilai_v02.cpp -o sinilai_v02`

Hasil pengujian menunjukkan program dapat dikompilasi tanpa error dan warning.

---

## 2. Pembagian dan Sisa

File:
`p03/bilangan_bulat.cpp`

Program membaca dua bilangan bulat dan menampilkan hasil bagi serta sisanya.

Contoh:
- Input: 17 dan 5
- Hasil bagi: 3
- Sisa: 2

Contoh keluaran:

`17 dibagi 5 adalah 3 sisa 2`

Program menggunakan operator `/` untuk hasil bagi dan `%` untuk sisa.

---

## 3. Perbandingan Prioritas C++ dan Python

File C++:
`p03/prioritas.cpp`

Tiga ekspresi dari `prioritas.cpp` diterjemahkan ke Python dan dibandingkan hasilnya.

| Ekspresi | C++ | Python | Keterangan |
|---|---:|---:|---|
| `2 * 3 / 4` | 1 | 1.5 | Berbeda |
| `2 / 4 * 3` | 0 | 1.5 | Berbeda |
| `17 % 5 * 2` | 4 | 4 | Sama |

### Alasan Perbedaan

Pada C++, kedua operand pada operasi `/` bertipe `int`, sehingga pembagian menghasilkan bilangan bulat dan bagian pecahannya dibuang.

Pada Python, operator `/` menghasilkan bilangan pecahan (`float`). Oleh karena itu, hasil kedua ekspresi pembagian tersebut berbeda.

Ekspresi `17 % 5 * 2` menghasilkan nilai yang sama pada C++ dan Python, yaitu 4.

---

## 4. Deklarasi AI

### Label AI: 1

AI digunakan sebagai alat bantu dalam pengerjaan tugas.

Alat:
- ChatGPT

Penggunaan:
- Membantu memahami instruksi tugas.

Cara memeriksa:
- Kode tetap dikompilasi dan dijalankan sendiri menggunakan `g++`.