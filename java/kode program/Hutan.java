import java.util.ArrayList;

// Hutan menampung makhluk hidup (composition)
public class Hutan {
    private String nama;
    private ArrayList<MakhlukHidup> makhlukList = new ArrayList<>();

    public Hutan(String nama) {
        this.nama = nama;
    }

    public void tambah(MakhlukHidup m) {
        makhlukList.add(m);
    }

    public void tampilkan() {
        System.out.println("=== Hutan: " + nama + " ===");
        for (MakhlukHidup m : makhlukList) {
            System.out.println(m.getInfo());
        }
    }
}
