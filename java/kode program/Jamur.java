// Subclass Jamur, turunan dari MakhlukHidup
public class Jamur extends MakhlukHidup {
    private String tipe;
    private boolean beracun;

    public Jamur(int id, String nama, int umur, String tipe, boolean beracun) {
        super(id, nama, umur);
        this.tipe = tipe;
        this.beracun = beracun;
    }

    @Override
    public String getInfo() {
        return String.format("Jamur   | ID: %d | Nama: %s | Umur: %d | Tipe: %s | Beracun: %s",
                this.id, this.nama, this.umur, this.tipe, this.beracun ? "Ya" : "Tidak");
    }
}
