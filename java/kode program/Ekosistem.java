import java.util.ArrayList;

// Ekosistem berisi beberapa Wilayah
public class Ekosistem {
    private String nama;
    private ArrayList<Wilayah> wilayahList = new ArrayList<>();

    public Ekosistem(String nama) {
        this.nama = nama;
    }

    public void tambahWilayah(Wilayah w) {
        wilayahList.add(w);
    }

    public void tampilkan() {
        System.out.println("=== Ekosistem: " + nama + " ===");
        for (Wilayah w : wilayahList) {
            w.tampilkan();
        }
    }
}
