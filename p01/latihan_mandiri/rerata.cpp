#include <iostream>

int main() {
    int tugas = 80;
    int uts = 75;
    int uas = 90;
    int kehadiran = 100;
    int praktikum = 90;

    double rerata = (tugas + uts + uas + kehadiran + praktikum) / 5.0;

    std::cout << "Rata-rata: " << rerata << "\n";

    return 0;
}