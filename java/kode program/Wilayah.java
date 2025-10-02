import java.util.ArrayList;

// Wilayah berisi beberapa Hutan
public class Wilayah {
    private String nama;
    private ArrayList<Hutan> hutanList = new ArrayList<>();

    public Wilayah(String nama) {
        this.nama = nama;
    }

    public void tambahHutan(Hutan h) {
        hutanList.add(h);
    }

    public void tampilkan() {
        System.out.println("=== Wilayah: " + nama + " ===");
        for (Hutan h : hutanList) {
            h.tampilkan();
        }
    }
}
