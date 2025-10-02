#include <iostream>
#include "Ekosistem.cpp"
#include "Wilayah.cpp"
#include "Hutan.cpp"
#include "Hewan.cpp"
#include "Tumbuhan.cpp"
#include "Jamur.cpp"

using namespace std;

int main() {
    // ===============================
    // Buat ekosistem hutan
    // ===============================
    Ekosistem ekosistem("Ekosistem Hutan Indonesia");

    // Buat wilayah
    Wilayah* wilayah1 = new Wilayah("Jawa Barat");

    // Buat hutan
    Hutan* hutan1 = new Hutan();

    // DATA AWAL (3 contoh)
    hutan1->tambah(new Hewan(1, "Harimau", 5, "Karnivora", "Hutan Tropis"));
    hutan1->tambah(new Tumbuhan(2, "Jati", 10, "Pohon", 15));
    hutan1->tambah(new Jamur(3, "Jamur Kuping", 1, "Ascomycota", false));

    // Masukkan hutan ke wilayah
    wilayah1->tambahHutan(hutan1);

    // Masukkan wilayah ke ekosistem
    ekosistem.tambahWilayah(wilayah1);

    int pilihan;
    int idCounter = 4;

    // ===============================
    // MENU INTERAKTIF
    // ===============================
    do {
        cout << "\n==== MENU EKOSISTEM ====\n";
        cout << "1. Lihat Ekosistem\n";
        cout << "2. Tambah Hewan ke Hutan\n";
        cout << "3. Tambah Tumbuhan ke Hutan\n";
        cout << "4. Tambah Jamur ke Hutan\n";
        cout << "5. Keluar\n";
        cout << "Pilih: ";
        cin >> pilihan;

        if (pilihan == 1) {
            ekosistem.tampilkan();
        } 
        else if (pilihan == 2) {
            string nama, makanan, habitat;
            int umur;
            cout << "Nama Hewan: "; cin >> nama;
            cout << "Umur: "; cin >> umur;
            cout << "Jenis Makanan: "; cin >> makanan;
            cout << "Habitat: "; cin >> habitat;
            hutan1->tambah(new Hewan(idCounter++, nama, umur, makanan, habitat));
        } 
        else if (pilihan == 3) {
            string nama, jenis;
            int umur, tinggi;
            cout << "Nama Tumbuhan: "; cin >> nama;
            cout << "Umur: "; cin >> umur;
            cout << "Jenis: "; cin >> jenis;
            cout << "Tinggi: "; cin >> tinggi;
            hutan1->tambah(new Tumbuhan(idCounter++, nama, umur, jenis, tinggi));
        } 
        else if (pilihan == 4) {
            string nama, tipe, beracunStr;
            int umur;
            bool beracun = false;

            cout << "Nama Jamur: ";
            cin.ignore(); 
            getline(cin, nama);

            cout << "Umur: ";
            cin >> umur;
            cin.ignore();

            cout << "Tipe Jamur: ";
            getline(cin, tipe);

            cout << "Apakah jamur beracun? (ya/tidak): ";
            cin >> beracunStr;

            // Normalisasi input
            if (beracunStr == "ya" || beracunStr == "Ya" || beracunStr == "YA")
                beracun = true;

            // Tambahkan ke hutan dengan idCounter
            hutan1->tambah(new Jamur(idCounter++, nama, umur, tipe, beracun));

            cout << "Jamur berhasil ditambahkan!\n";
        }

    } while (pilihan != 5);

    cout << "Program selesai.\n";
    return 0;
}
