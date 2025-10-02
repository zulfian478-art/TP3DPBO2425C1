from makhluk_hidup import MakhlukHidup

# ============================================
# Kelas Tumbuhan (turunan dari MakhlukHidup)
# ============================================
# Tumbuhan.py


# Kelas turunan dari MakhlukHidup
class Tumbuhan(MakhlukHidup):
    def __init__(self, id, nama, umur, jenis, tinggi):
        super().__init__(id, nama, umur)
        self.jenis = jenis
        self.tinggi = tinggi

    def tampilkan(self):
        # Override untuk menampilkan atribut khusus Tumbuhan
        return f"[Tumbuhan] {super().tampilkan()} {self.jenis:<10} {self.tinggi:<3} m"
