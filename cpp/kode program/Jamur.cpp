#ifndef JAMUR_H
#define JAMUR_H

#include "MakhlukHidup.cpp"

// ===============================
// KELAS Jamur (turunan dari MakhlukHidup)
// ===============================
class Jamur : public MakhlukHidup {
    string tipe;   // contoh: Ascomycota, Basidiomycota
    bool beracun;  // true = beracun, false = tidak beracun

public:
    // Konstruktor
    Jamur(int id, string nama, int umur, string tipe, bool beracun)
        : MakhlukHidup(id, nama, umur), tipe(tipe), beracun(beracun) {}

    // Implementasi fungsi print
    void print() override {
        cout << left << setw(5) << id
             << setw(15) << nama
             << setw(8) << umur
             << setw(15) << "Jamur"
             << setw(15) << tipe
             << setw(15) << (beracun ? "Ya" : "Tidak") << endl;
    }

    string getJenis() override { return "Jamur"; }
};

#endif
