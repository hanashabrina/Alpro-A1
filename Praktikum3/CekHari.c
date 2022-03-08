/*Nama File	: CekHari.c*/
/*Deskripsi	: Mengklasifikasi dan menampilkan nama hari berdasarkan nomor H yang diberikan*/
/*Pembuat	: Hana Shabrina-24060121130077*/
/*Tgl pembuatan	: Rabu, 09-03-2022 00.37 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
/*Kamus*/
    int H; /*nomor hari, 1 ≤ H ≤ 7*/

/*Algoritma*/
    printf("Masukkan nomor hari: ");
    scanf("%d", &H);
    switch (H) {
        case 1:
            printf("Senin");
            break;
        case 2:
            printf("Selasa");
            break;
        case 3:
            printf("Rabu");
            break;
        case 4:
            printf("Kamis");
            break;
        case 5:
            printf("Jumat");
            break;
        case 6:
            printf("Sabtu");
            break;
        case 7:
            printf("Minggu");
            break;
        default:
            printf("Masukan nomor hari tidak tepat");
            break;
    }
}
