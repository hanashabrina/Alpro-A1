/*Nama File	: BubbleSort.c*/
/*Deskripsi	: Mengurutkan data dari yang terkecil ke terbesar dengan bubble sorting*/
/*Pembuat	: Hana Shabrina-24060121130077*/
/*Tgl pembuatan : Jumat, 06-05-2022 11.00 WIB*/

#include <stdio.h>
#include <stdlib.h>

/*Sub Program*/
void BubbleSort(int arr[], int n)
{
    /*Kamus Lokal*/
    int i;
    int j;
    int tmp;

    /*Algoritma*/
    for(i = 0; i < n; i++){
        for(j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
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
    BubbleSort(arr, n);
    printf("Hasil pengurutan sebagai berikut :\n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
