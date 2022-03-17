/*Nama File	: CekPrima.c*/
/*Deskripsi	: Mengecek apakah sebuah bilangan integer N termasuk bilangan prima atau bukan*/
/*Pembuat	: Hana Shabrina-24060121130077*/
/*Tgl pembuatan	: Selasa, 15-03-2022 19.28 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
/*Kamus*/
    int N; /*bilangan integer sembarang, N > 0*/
    int i; /*counter*/

/*Algoritma*/
    printf("Masukkan Bilangan : ");
    scanf("%d", &N);
        if (N > 0){
            for (i = 2; i < N; i++) {
                if (N % i == 0) {
                    printf("Bukan Bilangan Prima\n");
                    return 0;
                }
            }
            printf("Bilangan Prima\n");
            return 0;
        }
        else{
            printf("N harus bilangan positif\n");
            return 0;
        }
}
