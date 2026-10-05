
## Latihan Mandiri

Latihan mandiri pada pertemuan pertama berisi beberapa percobaan untuk memahami proses kompilasi program C++ dan penggunaan compiler.

### 1. Perbaikan Program `rerata.cpp`

Program awal menghitung rata-rata dari 5 nilai, tetapi pembaginya masih menggunakan `3.0`.

Perubahan yang dilakukan:
- Mengubah pembagi dari `3.0` menjadi `5.0`.
- Hasil rata-rata setelah diperbaiki adalah `87`.

### 2. Kesalahan pada Tanda Kutip `hello.cpp`

Tanda kutip penutup pada `std::cout` dihapus untuk melihat pesan kesalahan compiler.

Compiler memberikan pesan:
- `missing terminating " character`
- Kesalahan utama terdapat pada baris 4.

Setelah percobaan selesai, tanda kutip dikembalikan seperti semula.

### 3. Menghapus Header `<iostream>`

Baris `#include <iostream>` dihapus untuk melihat akibatnya terhadap program.

Compiler memberikan pesan:
- `'cout' is not a member of 'std'`

Hal ini terjadi karena `std::cout` membutuhkan header `<iostream>`.

Setelah percobaan selesai, header dikembalikan.

### 4. Perbandingan Compiler Tanpa dan Dengan Warning

Program `rerata_awal.cpp` dikompilasi menggunakan dua cara:

```bash
g++ latihan_mandiri/rerata_awal.cpp -o latihan_mandiri/rerata_awal