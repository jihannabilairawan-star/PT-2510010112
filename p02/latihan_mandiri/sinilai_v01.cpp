#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama;
    string npm;
    int kehadiran;
    double mingguan;
    int uts;
    int uas;
    int semester;

    cout << "=== SiNilai v0.1 ===\n";

    getline(cin, nama);
    getline(cin, npm);
    cin >> kehadiran;
    cin >> mingguan;
    cin >> uts;
    cin >> uas;
    cin >> semester;

    cout << "Nama      : " << nama << "\n";
    cout << "NPM       : " << npm << "\n";
    cout << "Kehadiran : " << kehadiran << "\n";
    cout << "Mingguan  : " << mingguan << "\n";
    cout << "UTS       : " << uts << "\n";
    cout << "UAS       : " << uas << "\n";
    cout << "Semester       : " << semester << "\n";

    cout << "\n--- Kartu Data Mahasiswa ---\n";

    cout << "Nama      : " << nama << "\n";
    cout << "NPM       : " << npm << "\n";
    cout << "Kehadiran : " << kehadiran << "\n";
    cout << "Mingguan  : " << mingguan << "\n";
    cout << "UTS       : " << uts << "\n";
    cout << "UAS       : " << uas << "\n";
    cout << "Semester       : " << semester << "\n";

    return 0;
}