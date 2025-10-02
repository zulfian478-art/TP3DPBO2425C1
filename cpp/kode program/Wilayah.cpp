#ifndef WILAYAH_H
#define WILAYAH_H

#include "Hutan.cpp"

// ===============================
// KELAS Wilayah
// ===============================
// Composite yang berisi kumpulan Hutan
class Wilayah {
    string nama;
    vector<Hutan*> daftarHutan;

public:
    Wilayah(string nama) : nama(nama) {}

    // Tambahkan hutan ke dalam wilayah
    void tambahHutan(Hutan* h) {
        daftarHutan.push_back(h);
    }

    // Tampilkan semua hutan di wilayah
    void tampilkan() {
        cout << "\n=== Wilayah: " << nama << " ===\n";
        for (auto h : daftarHutan) {
            h->tampilkan();
        }
    }

    string getNama() { return nama; }
};

#endif
