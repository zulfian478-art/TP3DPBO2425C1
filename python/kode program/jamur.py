from makhluk_hidup import MakhlukHidup

# ============================================
# Kelas Jamur (turunan dari MakhlukHidup)
# ============================================
# Jamur.py

# Kelas turunan dari MakhlukHidup
class Jamur(MakhlukHidup):
    def __init__(self, id, nama, umur, tipe, beracun):
        super().__init__(id, nama, umur)
        self.tipe = tipe
        self.beracun = beracun

    def tampilkan(self):
        status = "Beracun" if self.beracun else "Tidak Beracun"
        return f"[Jamur] {super().tampilkan()} {self.tipe:<12} {status:<12}"
