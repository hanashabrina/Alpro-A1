/*Nama File	: FaktorBil.c*/
/*Deskripsi	: Menentukan faktor-faktor bilangan dari bilangan integer sembarang N*/
/*Pembuat	: Hana Shabrina-24060121130077*/
/*Tgl pembuatan	: Selasa, 15-03-2022 19.13 WIB*/

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
    if (N <= 0){
        printf("N harus bilangan positif\n");
    }
        for (i = 1; i <= N; i++) {
            if (N % i == 0) {
                printf("%d ", i);
            }
        }
    return 0;
}
