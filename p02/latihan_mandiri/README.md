### 3. Perbedaan Inisialisasi `int`

* `int nilai = 85.7;` → diterima compiler dan menghasilkan `85`. Nilai desimal `.7` dibuang karena terjadi konversi dari `double` ke `int`.
* `int nilai{85.7};` → ditolak compiler karena `{}` tidak mengizinkan *narrowing conversion* dari `double` ke `int`.

**Kesimpulan:** Inisialisasi dengan `{}` lebih ketat dibandingkan menggunakan `=`.

### 4. Nama Variabel yang Kurang Jelas

| Nama Variabel Buruk | Nama yang Lebih Jelas | Alasan                                     |
| ------------------- | --------------------- | ------------------------------------------ |
| `a`                 | `nama`                | Menjelaskan bahwa variabel menyimpan nama  |
| `x`                 | `nilai`               | Menjelaskan bahwa variabel menyimpan nilai |
| `n`                 | `jumlahMahasiswa`     | Menjelaskan jumlah mahasiswa               |
| `d`                 | `tanggalLahir`        | Menjelaskan data yang disimpan             |
| `tmp`               | `dataSementara`       | Menjelaskan bahwa data digunakan sementara |

**Kesimpulan:** Nama variabel sebaiknya jelas dan menggambarkan data yang disimpan agar kode mudah dipahami.
