# Janji

Saya Zulfian Rais Almanshur dengan NIM 2400325 mengerjakan soal Tugas Praktikum 3 dalam mata kuliah Desain 
Pemrograman Berbasis Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

# Diagram

![tp3](https://github.com/user-attachments/assets/ee591c07-672e-4bca-9ab6-f3ecfab77015)

# DESAIN DIAGRAM

Di sini ada 7 class yaitu:

1. Makhluk hidup:
   1. ID
   2. Nama
   3. Umur
   
2. Hewan:
   1. Jenis makanan
   2. Habitat
3. Tumbuhan:
   1. Jenis
   2. Tinggi
4. Jamur
   1. Tipe
   2. Beracun?
5. Hutan
   1. ID
   2. Nama
   3. Luas
6. Wilayah
    1. ID
    2. Nama
    3. Luas
7. Ekosistem
    1. ID
    2. Nama
    3. Jenis

# PENJELASAN DESAIN

DI sini di mulai dengan makhluk hidup sebagai pilar utama atau bisa di bilang kalau makhluk hidup adalah kepala dari program ini
nah di sini dia menjadi data utama yang bisa di pecah menjadi beberapa bagian clas baru, nah di sini saya memecahnya menjadi beberapa
bagian yaitu Hewan, Tumbuhan dan juga Jamur sebagai anak dari makhluk hidup tersebut, nah di sini dari masing masing 3 class ini memiliki datanya masing masing
di mana tiap class sudah pasti berbeda beda cara untuk mengenalnya.
class hewan: hewan ini berisi 2 atribut yakitu jenis makanan dan juga habitat yang di mana ini akan menjadi isi dari class ini dan menjadi data penting dari class ini
class Tumbuhan : ini juga berisi 2 atribut yaitu jenis dan tinggi untuk dapat mengetahui spesifikasi dari tumbuhan tersebut
class Jamur : class ini juga berisi 2 atribut yaitu Tipe dan juga beracun atau tidak, agar dapat menjadi data utama dalam mencangkup data jamur tersebut

nah di sini juga akan di lanjut ke class berikutnya yaitu class hutan yang di mana di class ini memiliki Nama dan juga luas dari hutan yang menjadi tempat dari 3 atribut seelumnya, dimana hutan ini juga 
membutuhkan 3 data class tersebut, namun bukan sebagai inheritence namun sebagai composite yang di mana hanya meminjam data dari sebelumnya saja.

lanjut ke class selanjutnya yaitu Wilayah yang di maan ini memiliki atribut nama dan juga Luas sama seperti hutan namun ini lebih ke tempat di mana makhluk hidup itu akan bertahan hidup,
dan class ini juga memiliki hubungan composite dengan class Hutan. 

lanjut ke terakhir di sini ada class Ekosistem yang di mana ini akan menjadi data di mana makluk hidup itu akan termasuk jenis makhluk apa dan hidupnya nanti akan bagaimana, nah di sini juga
class ini terhubung dengan class wilayah dan juga hubungannya merupakan composite.


# PENJELASAN JALANNYA PROGRAM

Saat kita sudah menjalankan program mau itu dari bahasa manapun kita akan masuk ke dalam program itu yang di mana program itu sudah memiliki 3 data awal,
nah di situ juga memiliki 5 pilihan 
1. tampilkan data; dimana di fitur ini kita bisa menampilkan data kita yang belum kita ubah maupum sudah kita ubah
2. tambah data hewan, dimana nanti di dalamnya kita dapat mengisi data yang dimana ini akan beisi mengenai data data yang di butuhkan oleh hewan ini
3. tambah data tumbuhan, dimana nanti di dalamnya akan terdapat bebrapa pertanyaan yang akan berhubungan dengan pertanyaan ini
4. tambah data jamur, di sini dia akan memmberikan apa yang harun kita isi serta pertanyaan apakah jamur  itu beracun atau tidak
5. exit, bila sudah selesai maka tombol ini dapat di gunakan untuk mengakhiri program

# DOKUMENTASI
# C++
<img width="1229" height="839" alt="Screenshot 2025-10-02 080211" src="https://github.com/user-attachments/assets/85ef4294-b8a7-43a0-9220-896ebd27a5d0" />
<img width="1911" height="967" alt="Screenshot 2025-10-02 080417" src="https://github.com/user-attachments/assets/bfd5f602-1db0-4531-9b48-a4ee51a5d3f4" />
<img width="1892" height="962" alt="Screenshot 2025-10-02 080546" src="https://github.com/user-attachments/assets/443de87f-7450-4837-9c3c-cdcd7afc1b13" />
<img width="1095" height="553" alt="Screenshot 2025-10-02 081133" src="https://github.com/user-attachments/assets/f5e1966a-3f54-4180-89e6-0aca8c236f07" />


# JAVA

<img width="1159" height="950" alt="Screenshot 2025-10-02 084551" src="https://github.com/user-attachments/assets/f2ea7b2a-3c82-4669-b78d-98db5f657287" />

# PYTHON

<img width="1485" height="790" alt="Screenshot 2025-10-02 082409" src="https://github.com/user-attachments/assets/fc0d5f6f-a87a-4b7d-a5ed-f51048e5334a" />
<img width="1498" height="954" alt="Screenshot 2025-10-02 082622" src="https://github.com/user-attachments/assets/d8610a54-0e60-4cbd-b827-f97ace24e868" />


