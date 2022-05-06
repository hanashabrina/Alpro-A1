/*Nama File	: BubbleSort.c*/
/*Deskripsi	: Mengurutkan data menggunakan bubble sorting*/
/*Pembuat	: Hana Shabrina-24060121130077*/
/*Tgl pembuatan : Jumat, 06-05-2022 20.00 WIB*/

#include <stdio.h>
#include <stdlib.h>

/*Sub Program untuk mengurutkan dari data yang terkecil ke terbesar*/
void BubbleSortAsc(int arr[], int n)
{
    /*Kamus Lokal*/
    int i;
    int j;
    int tmp;

    /*Algoritma*/
    for(i = 0; i < (n-1); i++){
        for(j = 0; j < (n-1); j++){
            if(arr[j+1] < arr[j]){
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}

/*Sub Program untuk mengurutkan dari data yang terbesar ke terkecil*/
void BubbleSortDesc(int arr[], int n)
{
    /*Kamus Lokal*/
    int i;
    int j;
    int tmp;

    /*Algoritma*/
    for(i = 0; i < (n-1); i++){
        for(j = 0; j < (n-1); j++){
            if(arr[j+1] > arr[j]){
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
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
    printf("Bubble Sorting\n");
    printf("Masukkan banyaknya jumlah data : ");
    scanf("%d", &n);
    printf("Masukkan data sebanyak %d\n", n);
    for(i = 0; i < n; i++){
        printf("Data ke-%d = ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\n");

    /*Memanggil Sub Program*/
    BubbleSortAsc(arr, n);
    printf("Setelah Sorting Ascending : \n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    /*Memanggil Sub Program*/
    BubbleSortDesc(arr, n);
    printf("\nSetelah Sorting Descending : \n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
