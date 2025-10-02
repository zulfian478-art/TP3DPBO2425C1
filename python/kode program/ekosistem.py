# ============================================
# Kelas Ekosistem menyimpan beberapa wilayah
# ============================================
# Kelas Ekosistem berisi kumpulan wilayah
class Ekosistem:
    def __init__(self, nama):
        self.nama = nama
        self.wilayah_list = []

    def tambah_wilayah(self, wilayah):
        self.wilayah_list.append(wilayah)

    def tampilkan(self):
        print(f"\n##### {self.nama} #####")
        for w in self.wilayah_list:
            w.tampilkan()
