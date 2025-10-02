#ifndef EKOSISTEM_H
#define EKOSISTEM_H

#include "Wilayah.cpp"

// ===============================
// KELAS Ekosistem
// ===============================
// Composite paling besar, berisi kumpulan Wilayah
class Ekosistem {
    string nama;
    vector<Wilayah*> daftarWilayah;

public:
    Ekosistem(string nama) : nama(nama) {}

    // Tambahkan wilayah ke dalam ekosistem
    void tambahWilayah(Wilayah* w) {
        daftarWilayah.push_back(w);
    }

    // Tampilkan semua wilayah
    void tampilkan() {
        cout << "\n#############################\n";
        cout << "Ekosistem: " << nama << endl;
        cout << "#############################\n";
        for (auto w : daftarWilayah) {
            w->tampilkan();
        }
    }
};

#endif
