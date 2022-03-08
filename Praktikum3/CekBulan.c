/*Nama File	: CekBulan.c*/
/*Deskripsi	: Mengklasifikasi dan menampilkan nama bulan berdasarkan nomor B yang diberikan*/
/*Pembuat	: Hana Shabrina-24060121130077*/
/*Tgl pembuatan	: Rabu, 09-03-2022 00.28 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
/*Kamus*/
    int B; /*nomor bulan, 1 ≤ H ≤ 12*/

/*Algoritma*/
    printf("Masukkan nomor bulan: ");
    scanf("%d", &B);
    switch (B) {
        case 1:
            printf("Januari");
            break;
        case 2:
            printf("Februari");
            break;
        case 3:
            printf("Maret");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("Mei");
            break;
        case 6:
            printf("Juni");
            break;
        case 7:
            printf("Juli");
            break;
        case 8:
            printf("Agustus");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("Oktober");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("Desember");
            break;
        default:
            printf("Masukan nomor bulan tidak tepat");
            break;
    }
}
