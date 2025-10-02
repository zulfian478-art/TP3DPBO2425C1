// Kelas abstrak: MakhlukHidup
public abstract class MakhlukHidup {
    protected int id;
    protected String nama;
    protected int umur;

    public MakhlukHidup(int id, String nama, int umur) {
        this.id = id;
        this.nama = nama;
        this.umur = umur;
    }

    // Method abstrak -> wajib diimplementasikan subclass
    public abstract String getInfo();
}
