// Subclass Hewan, turunan dari MakhlukHidup
public class Hewan extends MakhlukHidup {
    private String makanan;
    private String habitat;

    public Hewan(int id, String nama, int umur, String makanan, String habitat) {
        super(id, nama, umur);
        this.makanan = makanan;
        this.habitat = habitat;
    }

    @Override
    public String getInfo() {
        return String.format("Hewan   | ID: %d | Nama: %s | Umur: %d | Makanan: %s | Habitat: %s",
                this.id, this.nama, this.umur, this.makanan, this.habitat);
    }
}
