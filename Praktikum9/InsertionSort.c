/*Nama File	: InsertionSort.c*/
/*Deskripsi	: Mengurutkan data dari yang terkecil ke terbesar dengan insertion sorting*/
/*Pembuat	: Hana Shabrina-24060121130077*/
/*Tgl pembuatan : Jumat, 06-05-2022 18.15 WIB*/

#include <stdio.h>
#include <stdlib.h>

/*Sub Program*/
void InsertionSort(int arr[], int n)
{
    /*Kamus Lokal*/
    int i;
    int j;
    int tmp;

    /*Algoritma*/
    for(i = 1; i < n; i++){
        j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            tmp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = tmp;
            j--;
        }
    }
}

/*Program Utama*/
int main()
{
    /*Kamus*/
    int n;
    int arr[100];
    int i;
    int j;
    int tmp;

    /*Algoritma*/
    printf("Insertion Sorting\n");
    printf("Masukkan banyaknya jumlah data : ");
    scanf("%d", &n);
    printf("Masukkan data sebanyak %d\n", n);
    for(i = 0; i < n; i++){
        printf("Data ke-%d = ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\n");

    /*Memanggil Sub Program*/
    InsertionSort(arr, n);
    printf("Hasil pengurutan sebagai berikut :\n");
    for (i = 0; i <= n-1; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
