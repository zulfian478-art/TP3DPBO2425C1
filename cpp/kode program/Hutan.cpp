#ifndef HUTAN_H
#define HUTAN_H

#include <vector>
#include "MakhlukHidup.cpp"

// ===============================
// KELAS COMPOSITE Hutan
// ===============================
// Berisi kumpulan objek MakhlukHidup (Hewan, Tumbuhan, Jamur)
class Hutan {
    vector<MakhlukHidup*> daftar;

public:
    // Tambahkan makhluk hidup ke dalam hutan
    void tambah(MakhlukHidup* m) {
        daftar.push_back(m);
    }

    // Tampilkan semua data makhluk hidup dalam tabel
    void tampilkan() {
        cout << "\n==========================================================================\n";
        cout << left << setw(5) << "ID"
             << setw(15) << "Nama"
             << setw(8) << "Umur"
             << setw(15) << "Jenis"
             << setw(15) << "Atribut1"
             << setw(15) << "Atribut2" << endl;
        cout << "--------------------------------------------------------------------------\n";

        for (auto m : daftar) {
            m->print();
        }

        cout << "==========================================================================\n";
    }
};

#endif
