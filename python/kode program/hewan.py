from makhluk_hidup import MakhlukHidup

# ============================================
# Kelas Hewan (turunan dari MakhlukHidup)
# ============================================
# Hewan.py

# Kelas turunan dari MakhlukHidup
class Hewan(MakhlukHidup):
    def __init__(self, id, nama, umur, makanan, habitat):
        super().__init__(id, nama, umur)
        self.makanan = makanan
        self.habitat = habitat

    def tampilkan(self):
        # Override untuk menampilkan atribut khusus Hewan
        return f"[Hewan] {super().tampilkan()} {self.makanan:<12} {self.habitat:<12}"

