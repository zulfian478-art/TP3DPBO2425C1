#ifndef HEWAN_H
#define HEWAN_H

#include "MakhlukHidup.cpp"

// ===============================
// KELAS Hewan (turunan dari MakhlukHidup)
// ===============================
class Hewan : public MakhlukHidup {
    string jenisMakanan;  // contoh: Karnivora, Herbivora
    string habitat;       // contoh: Hutan, Padang Rumput

public:
    // Konstruktor
    Hewan(int id, string nama, int umur, string makanan, string habitat)
        : MakhlukHidup(id, nama, umur), jenisMakanan(makanan), habitat(habitat) {}

    // Implementasi fungsi print
    void print() override {
        cout << left << setw(5) << id
             << setw(15) << nama
             << setw(8) << umur
             << setw(15) << "Hewan"
             << setw(15) << jenisMakanan
             << setw(15) << habitat << endl;
    }

    // Mengembalikan jenis
    string getJenis() override { return "Hewan"; }
};

#endif
