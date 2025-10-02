# ============================================
# Kelas Wilayah menyimpan beberapa hutan
# ============================================
# Kelas Wilayah berisi kumpulan Hutan
class Wilayah:
    def __init__(self, nama):
        self.nama = nama
        self.hutan_list = []

    def tambah_hutan(self, hutan):
        self.hutan_list.append(hutan)

    def tampilkan(self):
        print(f"\n=== Wilayah: {self.nama} ===")
        for h in self.hutan_list:
            h.tampilkan()

