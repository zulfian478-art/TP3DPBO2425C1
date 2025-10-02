#ifndef MAKHLUK_HIDUP_H
#define MAKHLUK_HIDUP_H

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// ===============================
// KELAS ABSTRAK MakhlukHidup
// ===============================
// Superclass dari Hewan, Tumbuhan, dan Jamur
// Memiliki atribut umum: id, nama, umur
// Bersifat abstrak karena memiliki pure virtual function
class MakhlukHidup {
protected:
    int id;
    string nama;
    int umur;

public:
    // Konstruktor
    MakhlukHidup(int id, string nama, int umur) {
        this->id = id;
        this->nama = nama;
        this->umur = umur;
    }

    // Fungsi abstrak (harus diimplementasi oleh subclass)
    virtual void print() = 0;        // Menampilkan data dalam tabel
    virtual string getJenis() = 0;   // Mengembalikan jenis makhluk hidup

    // Destructor virtual agar bisa menghapus objek turunan dengan benar
    virtual ~MakhlukHidup() {}
};

#endif
