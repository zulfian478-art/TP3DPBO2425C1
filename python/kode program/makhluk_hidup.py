# ============================================
# Kelas dasar (parent) untuk semua makhluk hidup
# ============================================

class MakhlukHidup:
    def __init__(self, id, nama, umur):
        self.id = id
        self.nama = nama
        self.umur = umur

    def tampilkan(self):
        # String default untuk identitas makhluk hidup
        return f"{self.id:<3} {self.nama:<15} {self.umur:<5}"

