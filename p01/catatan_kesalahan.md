# Catatan Kesalahan Program
| Berkas | Jenis kesalahan | Pesan yang muncul | Cara kamu mengetahuinya |
|---|---|---|---|
| k1_sintaks.cpp | Kesalahan sintaks, yaitu kesalahan pada penulisan kode program. | `tempCodeRunnerFile.cpp:5:5: error: expected ',' or ';' before 'std'` | Diketahui dari pesan error yang muncul saat proses compile. |
| k2_nama.cpp | Kesalahan nama, yaitu penggunaan nama variabel yang tidak sesuai atau belum didefinisikan. | `k2_nama.cpp:8:31: error: 'Nilai' was not declared in this scope; did you mean 'nilai'?` | Diketahui dari pesan error compiler yang menunjukkan nama variabel tidak dikenali. |
| k3_runtime.cpp | Kesalahan runtime, yaitu kesalahan yang terjadi ketika program sedang dijalankan. | `Jumlah mahasiswa: 0` | Program berhenti setelah diberikan input 0 sehingga tidak menghasilkan rata-rata. |
| k4_logika.cpp | Kesalahan logika, yaitu program dapat berjalan tetapi menghasilkan hasil yang tidak sesuai. | `Rata-rata: 81` | Diketahui dengan membandingkan hasil program dengan perhitungan rata-rata yang benar, yaitu 81,67. |

# Pendapat
Menurut saya, kesalahan logika merupakan jenis kesalahan yang paling berbahaya karena program tetap dapat berjalan tanpa menampilkan pesan error, tetapi hasil yang diberikan bisa salah. Kesalahan tersebut dapat sulit diketahui jika hasil program tidak diperiksa dengan teliti.