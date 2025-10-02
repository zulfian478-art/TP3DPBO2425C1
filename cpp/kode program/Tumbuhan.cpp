#ifndef TUMBUHAN_H
#define TUMBUHAN_H

#include "MakhlukHidup.cpp"

// ===============================
// KELAS Tumbuhan (turunan dari MakhlukHidup)
// ===============================
class Tumbuhan : public MakhlukHidup {
    string jenis;  // contoh: Pohon, Bunga
    int tinggi;    // dalam meter

public:
    // Konstruktor
    Tumbuhan(int id, string nama, int umur, string jenis, int tinggi)
        : MakhlukHidup(id, nama, umur), jenis(jenis), tinggi(tinggi) {}

    // Implementasi fungsi print
    void print() override {
        cout << left << setw(5) << id
             << setw(15) << nama
             << setw(8) << umur
             << setw(15) << "Tumbuhan"
             << setw(15) << jenis
             << setw(15) << tinggi << endl;
    }

    string getJenis() override { return "Tumbuhan"; }
};

#endif
