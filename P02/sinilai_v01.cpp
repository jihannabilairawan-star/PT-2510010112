#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama;
    string npm;

    cout << "=== SiNilai v0.1 ===\n";

    getline(cin, nama);
    getline(cin, npm);

    cout << "Nama      : " << nama << "\n";
    cout << "NPM       : " << npm << "\n";

    cout << "\n--- Kartu Data Mahasiswa ---\n";

    return 0;
}