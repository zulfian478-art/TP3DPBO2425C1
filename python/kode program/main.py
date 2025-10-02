from ekosistem import Ekosistem
from wilayah import Wilayah
from hutan import Hutan
from hewan import Hewan
from tumbuhan import Tumbuhan
from jamur import Jamur

def main():
    # Buat ekosistem
    ekosistem = Ekosistem("Ekosistem Hutan Indonesia")

    # Buat wilayah
    wilayah1 = Wilayah("Jawa Barat")

    # Buat hutan
    hutan1 = Hutan("Hutan Tropis")

    # ===== Data awal (3 contoh) =====
    hutan1.tambah(Hewan(1, "Harimau", 5, "Karnivora", "Hutan Tropis"))
    hutan1.tambah(Tumbuhan(2, "Jati", 10, "Pohon", 15))
    hutan1.tambah(Jamur(3, "Jamur Kuping", 1, "Ascomycota", False))

    wilayah1.tambah_hutan(hutan1)
    ekosistem.tambah_wilayah(wilayah1)

    id_counter = 4

    # ===== Menu interaktif =====
    while True:
        print("\n==== MENU EKOSISTEM ====")
        print("1. Lihat Ekosistem")
        print("2. Tambah Hewan")
        print("3. Tambah Tumbuhan")
        print("4. Tambah Jamur")
        print("5. Keluar")
        pilihan = input("Pilih: ")

        if pilihan == "1":
            ekosistem.tampilkan()
        elif pilihan == "2":
            nama = input("Nama Hewan: ")
            umur = int(input("Umur: "))
            makanan = input("Jenis Makanan: ")
            habitat = input("Habitat: ")
            hutan1.tambah(Hewan(id_counter, nama, umur, makanan, habitat))
            id_counter += 1
        elif pilihan == "3":
            nama = input("Nama Tumbuhan: ")
            umur = int(input("Umur: "))
            jenis = input("Jenis: ")
            tinggi = int(input("Tinggi (m): "))
            hutan1.tambah(Tumbuhan(id_counter, nama, umur, jenis, tinggi))
            id_counter += 1
        elif pilihan == "4":
            nama = input("Nama Jamur: ")
            umur = int(input("Umur: "))
            tipe = input("Tipe Jamur: ")
            beracun = input("Apakah beracun (ya/tidak): ").lower() == "ya"
            hutan1.tambah(Jamur(id_counter, nama, umur, tipe, beracun))
            id_counter += 1
        elif pilihan == "5":
            print("Program selesai.")
            break
        else:
            print("Pilihan tidak valid!")

if __name__ == "__main__":
    main()
