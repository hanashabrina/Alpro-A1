/*Nama File	: CountingSort.c*/
/*Deskripsi	: Mengurutkan data dari yang terkecil ke terbesar dengan counting sorting*/
/*Pembuat	: Hana Shabrina-24060121130077*/
/*Tgl pembuatan : Jumat, 06-05-2022 14.15 WIB*/

#include <stdio.h>
#include <stdlib.h>

/*Sub Program*/
void CountingSort(int arr[], int N)
{
    /*Kamus Lokal*/
    int i;
    int j;
    int tmp;
    int idx;

    /*Algoritma*/
    for(i = 0; i < (N-1); i++){
        idx = i;
        for(j = i+1; j < N; j++){
            if(arr[j] < arr[idx]){
                idx = j;
            }
        }
        tmp = arr[i];
        arr[i] = arr[idx];
        arr[idx] = tmp;
    }
}

/*Program Utama*/
int main()
{
    /*Kamus*/
    int arr[100];
    int N;
    int i;

    /*Algoritma*/
    printf("Counting Sorting\n");
    printf("Masukkan banyak elemen : ");
    scanf("%d", &N);
    printf("Masukkan nilai : \n");
    for(i = 0; i < N; i++){
        printf("Data ke-%d = ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\n");

    /*Memanggil Sub Program*/
    CountingSort(arr, N);
    printf("Hasil pengurutan sebagai berikut : \n");
    for(i = 0; i < N; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
