// Subclass Tumbuhan, turunan dari MakhlukHidup
public class Tumbuhan extends MakhlukHidup {
    private String jenis;
    private int tinggi;

    public Tumbuhan(int id, String nama, int umur, String jenis, int tinggi) {
        super(id, nama, umur);
        this.jenis = jenis;
        this.tinggi = tinggi;
    }

    @Override
    public String getInfo() {
        return String.format("Tumbuhan| ID: %d | Nama: %s | Umur: %d | Jenis: %s | Tinggi: %d",
                this.id, this.nama, this.umur, this.jenis, this.tinggi);
    }
}
