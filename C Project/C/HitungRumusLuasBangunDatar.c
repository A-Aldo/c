#include <stdio.h>

int main() {
    int pilihan;
    int panjang, lebar, luas_persegi_panjang;
    int alas, tinggi, luas_segitiga;

    printf("Pilih bangunan yang ingin dihitung :\n");
    printf("1. Persegi Panjang\n");
    printf("2. Segitiga\n");
    printf("Masukkan pilihan Anda (1 atau 2): ");
    scanf("%d", &pilihan);

    if (pilihan == 1) {
        printf("\nMasukkan Panjang dan Lebar persegi panjang\n");

        printf("P = ? ");
        scanf("%d", &panjang);
        
        printf("L = ? ");
        scanf("%d", &lebar);

        luas_persegi_panjang = panjang * lebar;

        printf("Luas persegi panjang adalah: %d\n", luas_persegi_panjang);
    } else if (pilihan == 2) {
        printf("\nMasukkan Alas dan Tinggi segitiga\n");

        printf("Alas = ? ");
        scanf("%d", &alas);
        
        printf("Tinggi = ? ");
        scanf("%d", &tinggi);

        luas_segitiga = (alas * tinggi) / 2;

        printf("Luas segitiga adalah: %d\n", luas_segitiga);
    } else {
        printf("Pilihan tidak valid. Silakan jalankan program lagi.\n");
    }

    return 0;
}

