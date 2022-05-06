/*Nama File	: CountingSort.c*/
/*Deskripsi	: Mengurutkan data dari yang terkecil ke terbesar dengan counting sorting*/
/*Pembuat	: Hana Shabrina-24060121130077*/
/*Tgl pembuatan : Jumat, 06-05-2022 19.15 WIB*/

#include <stdio.h>
#include <stdlib.h>

/*Sub Program*/
void CountingSort(int arr[], int n)
{
    /*Kamus Lokal*/
    int i;
    int j;
    int tmp;
    int idx;

    /*Algoritma*/
    for(i = 0; i < (n-1); i++){
        idx = i;
        for(j = i+1; j < n; j++){
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
    int n;
    int i;

    /*Algoritma*/
    printf("Counting Sorting\n");
    printf("Masukkan banyak elemen : ");
    scanf("%d", &n);
    printf("Masukkan nilai : \n");
    for(i = 0; i < n; i++){
        printf("Data ke-%d = ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\n");

    /*Memanggil Sub Program*/
    CountingSort(arr, n);
    printf("Hasil pengurutan sebagai berikut : \n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
