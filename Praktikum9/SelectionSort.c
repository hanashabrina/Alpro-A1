/*Nama File	: SelectionSort.c*/
/*Deskripsi	: Mengurutkan data dari yang terkecil ke terbesar dengan selection sorting*/
/*Pembuat	: Hana Shabrina-24060121130077*/
/*Tgl pembuatan : Jumat, 06-05-2022 11.45 WIB*/

#include <stdio.h>
#include <stdlib.h>

/*Sub Program*/
void SelectionSort(int arr[], int n)
{
  /*Kamus Lokal*/
    int i;
    int j;
    int posisi;
    int swap;

  /*Algoritma*/
    for(i = 0; i < (n-1); i++){
        posisi = i;
        for (j = i + 1; j < n; j++){
            if(arr[posisi] > arr[j]){
                posisi = j;
            }
        }
        if(posisi != i){
            swap = arr[i];
            arr[i] = arr[posisi];
            arr[posisi] = swap;
        }
    }
}

/*Program Utama*/
int main()
{
    /*Kamus*/
    int arr[100];
    int n;
    int i;
    int j;

    /*Algoritma*/
    printf("Selection Sorting\n");
    printf("Masukkan banyaknya jumlah data : ");
    scanf("%d", &n);
    printf("Masukkan data sebanyak %d\n", n);
    for(i = 0; i < n; i++){
        printf("Data ke-%d = ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\n");

    /*Memanggil Sub Program*/
    SelectionSort(arr, n);
    printf("Hasil pengurutan sebagai berikut :\n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
