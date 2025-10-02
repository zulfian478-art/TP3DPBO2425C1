# ============================================
# Kelas Hutan menyimpan banyak makhluk hidup
# ============================================
# Kelas Hutan berisi kumpulan makhluk hidup
class Hutan:
    def __init__(self, nama):
        self.nama = nama
        self.makhluk = []

    def tambah(self, m):
        # Tambah makhluk ke dalam hutan
        self.makhluk.append(m)

    def tampilkan(self):
        print(f"\n--- Hutan: {self.nama} ---")
        if not self.makhluk:
            print("Belum ada makhluk hidup.")
        else:
            print("="*70)
            for m in self.makhluk:
                print(m.tampilkan())
            print("="*70)
