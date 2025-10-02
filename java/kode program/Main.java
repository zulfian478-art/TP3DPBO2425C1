import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        Ekosistem ekosistem = new Ekosistem("Ekosistem Hutan Indonesia");
        Wilayah wilayah1 = new Wilayah("Jawa Barat");
        Hutan hutan1 = new Hutan("Hutan Tropis");

        // Data awal
        hutan1.tambah(new Hewan(1, "Harimau", 5, "Karnivora", "Hutan"));
        hutan1.tambah(new Tumbuhan(2, "Jati", 10, "Pohon", 15));
        hutan1.tambah(new Jamur(3, "Kuping", 1, "Ascomycota", false));

        wilayah1.tambahHutan(hutan1);
        ekosistem.tambahWilayah(wilayah1);

        int pilihan;
        int idCounter = 4;

        do {
            System.out.println("\n==== MENU EKOSISTEM ====");
            System.out.println("1. Lihat Ekosistem");
            System.out.println("2. Tambah Hewan");
            System.out.println("3. Tambah Tumbuhan");
            System.out.println("4. Tambah Jamur");
            System.out.println("5. Keluar");
            System.out.print("Pilih: ");
            pilihan = sc.nextInt();
            sc.nextLine(); // buang newline

            if (pilihan == 1) {
                ekosistem.tampilkan();
            } else if (pilihan == 2) {
                System.out.print("Nama Hewan: "); String nama = sc.nextLine();
                System.out.print("Umur: "); int umur = sc.nextInt(); sc.nextLine();
                System.out.print("Jenis Makanan: "); String makanan = sc.nextLine();
                System.out.print("Habitat: "); String habitat = sc.nextLine();
                hutan1.tambah(new Hewan(idCounter++, nama, umur, makanan, habitat));
            } else if (pilihan == 3) {
                System.out.print("Nama Tumbuhan: "); String nama = sc.nextLine();
                System.out.print("Umur: "); int umur = sc.nextInt(); sc.nextLine();
                System.out.print("Jenis: "); String jenis = sc.nextLine();
                System.out.print("Tinggi: "); int tinggi = sc.nextInt(); sc.nextLine();
                hutan1.tambah(new Tumbuhan(idCounter++, nama, umur, jenis, tinggi));
            } else if (pilihan == 4) {
                System.out.print("Nama Jamur: "); String nama = sc.nextLine();
                System.out.print("Umur: "); int umur = sc.nextInt(); sc.nextLine();
                System.out.print("Tipe: "); String tipe = sc.nextLine();
                System.out.print("Beracun (ya/tidak): "); String b = sc.nextLine();
                boolean beracun = b.equalsIgnoreCase("ya");
                hutan1.tambah(new Jamur(idCounter++, nama, umur, tipe, beracun));
            }

        } while (pilihan != 5);

        sc.close();
        System.out.println("Program selesai.");
    }
}
