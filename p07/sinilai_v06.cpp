
#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
    const double BOBOT_KEHADIRAN = 0.10;
    const double BOBOT_MINGGUAN = 0.45;
    const double BOBOT_UTS = 0.25;
    const double BOBOT_UAS = 0.20;

    int jumlah_mahasiswa = 0;
    cout << "=== SiNilai v0.6 ===\n";

    // TODO 1: do-while di atas berputar tanpa henti kalau pengguna mengetik huruf (cin gagal, isi jadi 0).
    //         Ganti dengan pola input_aman.cpp: baca sekali, lalu while (cin.fail() || jumlah_mahasiswa < 1)
    //         { cin.clear(); cin.ignore(1000, '\n'); minta lagi; }.
    cout << "Jumlah mahasiswa (paling sedikit 1): ";
    cin >> jumlah_mahasiswa;

    while (cin.fail() || jumlah_mahasiswa < 1) {
        cin.clear();
        cin.ignore(1000, '\n');

        cout << "Jumlah tidak valid. Masukkan lagi: ";
        cin >> jumlah_mahasiswa;
    }

    cin.ignore(1000, '\n');

    cout << fixed << setprecision(2);

    double total_nilai = 0;
    int jumlah_lulus = 0;
    int jumlah_a = 0;
    int jumlah_b = 0;
    int jumlah_c = 0;
    int jumlah_d = 0;
    int jumlah_e = 0;
    double nilai_tertinggi = -1;
    string nama_tertinggi;

    for (int i = 1; i <= jumlah_mahasiswa; i++) {
        string nama;
        string npm;
        double kehadiran = 0;
        double mingguan = 0;
        double uts = 0;
        double uas = 0;

        cout << "\n--- Mahasiswa ke-" << i << " dari "
             << jumlah_mahasiswa << " ---\n";

        // TODO 2: bungkus pembacaan nama dengan do-while seperti validasi_nama.cpp: ulangi selama nama
        //         kosong atau hanya spasi, atau mengandung angka. Periksa huruf per huruf dengan for.
        do {
            cout << "Nama      : ";
            getline(cin, nama);

            bool kosong = true;
            bool ada_angka = false;

            for (char huruf : nama) {
                unsigned char c = static_cast<unsigned char>(huruf);

                if (!isspace(c)) {
                    kosong = false;
                }

                if (isdigit(c)) {
                    ada_angka = true;
                }
            }

            if (kosong) {
                cout << "Nama tidak boleh kosong.\n";
            } else if (ada_angka) {
                cout << "Nama tidak boleh mengandung angka.\n";
            }

            if (kosong || ada_angka) {
                nama.clear();
            }

        } while (nama.empty());

        // TODO 3: rapikan nama seperti rapikan_nama.cpp: huruf pertama tiap kata besar, sisanya kecil.
        bool awal_kata = true;

        for (char &huruf : nama) {
            unsigned char c = static_cast<unsigned char>(huruf);

            if (isspace(c)) {
                awal_kata = true;
            } else {
                if (awal_kata) {
                    huruf = static_cast<char>(toupper(c));
                    awal_kata = false;
                } else {
                    huruf = static_cast<char>(tolower(c));
                }
            }
        }

        cout << "NPM       : ";
        getline(cin, npm);

        // TODO 4: tambahkan while (cin.fail() || kehadiran < 0 || kehadiran > 100) { clear; ignore; minta lagi; }
        cout << "Kehadiran : ";
        cin >> kehadiran;

        while (cin.fail() || kehadiran < 0 || kehadiran > 100) {
            cin.clear();
            cin.ignore(1000, '\n');

            cout << "Nilai harus angka 0 sampai 100. Kehadiran: ";
            cin >> kehadiran;
        }

        cout << "Mingguan  : ";
        cin >> mingguan;

         // TODO 5: ulangi pola TODO 4 untuk mingguan, uts, dan uas (ya, empat kali; catat rasanya).
        while (cin.fail() || mingguan < 0 || mingguan > 100) {
            cin.clear();
            cin.ignore(1000, '\n');

            cout << "Nilai harus angka 0 sampai 100. Mingguan: ";
            cin >> mingguan;
        }

        cout << "UTS       : ";
        cin >> uts;

        while (cin.fail() || uts < 0 || uts > 100) {
            cin.clear();
            cin.ignore(1000, '\n');

            cout << "Nilai harus angka 0 sampai 100. UTS: ";
            cin >> uts;
        }

        cout << "UAS       : ";
        cin >> uas;

        while (cin.fail() || uas < 0 || uas > 100) {
            cin.clear();
            cin.ignore(1000, '\n');

            cout << "Nilai harus angka 0 sampai 100. UAS: ";
            cin >> uas;
        }

        cin.ignore(1000, '\n');

        double nilai_akhir =
            kehadiran * BOBOT_KEHADIRAN +
            mingguan * BOBOT_MINGGUAN +
            uts * BOBOT_UTS +
            uas * BOBOT_UAS;

        string huruf_mutu;

        if (nilai_akhir >= 80) {
            huruf_mutu = "A";
        } else if (nilai_akhir >= 75) {
            huruf_mutu = "B+";
        } else if (nilai_akhir >= 70) {
            huruf_mutu = "B";
        } else if (nilai_akhir >= 65) {
            huruf_mutu = "C+";
        } else if (nilai_akhir >= 60) {
            huruf_mutu = "C";
        } else if (nilai_akhir >= 40) {
            huruf_mutu = "D";
        } else {
            huruf_mutu = "E";
        }

        bool lulus = nilai_akhir >= 60;

        cout << "  " << left << setw(20) << nama
             << right << setw(7) << nilai_akhir
             << "  " << left << setw(3) << huruf_mutu;

        if (lulus) {
            cout << "Lulus\n";
        } else {
            cout << "Belum lulus\n";
        }

        total_nilai += nilai_akhir;

        if (lulus) {
            jumlah_lulus++;
        }

        switch (huruf_mutu[0]) {
            case 'A':
                jumlah_a++;
                break;
            case 'B':
                jumlah_b++;
                break;
            case 'C':
                jumlah_c++;
                break;
            case 'D':
                jumlah_d++;
                break;
            default:
                jumlah_e++;
        }

        if (nilai_akhir > nilai_tertinggi) {
            nilai_tertinggi = nilai_akhir;
            nama_tertinggi = nama;
        }
    }

    cout << "\n=== Laporan Kelas ===\n";
    cout << "Jumlah mahasiswa : " << jumlah_mahasiswa << "\n";
    cout << "Lulus            : " << jumlah_lulus << "\n";
    cout << "Belum lulus      : "
         << jumlah_mahasiswa - jumlah_lulus << "\n";
    cout << "Rata-rata kelas  : "
         << total_nilai / jumlah_mahasiswa << "\n";
    cout << "Tertinggi        : " << nama_tertinggi
         << " (" << nilai_tertinggi << ")\n";

    cout << "\nSebaran huruf mutu:\n";

    for (char huruf = 'A'; huruf <= 'E'; huruf++) {
        int banyak = 0;

        if (huruf == 'A') {
            banyak = jumlah_a;
        } else if (huruf == 'B') {
            banyak = jumlah_b;
        } else if (huruf == 'C') {
            banyak = jumlah_c;
        } else if (huruf == 'D') {
            banyak = jumlah_d;
        } else {
            banyak = jumlah_e;
        }

        cout << huruf << " | ";

        for (int j = 1; j <= banyak; j++) {
            cout << "#";
        }

        cout << " " << banyak << "\n";
    }

    return 0;
}
