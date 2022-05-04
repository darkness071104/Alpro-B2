/* Nama File : Bubblesort.c*/
/* Deskripsi : Mengurutkan data Berdasarkan Petukaran Harga (Bubble Sorting)*/
/* nama Pembuat : 24060121140140-Fauzan Ramadhan Putra*/
/* Tanggal Pembuatan : Selasa, 3 Mei 2022*/

#include <stdio.h> /*header file*/
void Bubblesort(int arr[], int n){
    // Kamus Lokal
    int i, j, temp;
    // Algoritma
    for (i = 0; i < n; i++){
        for (j = i+1; j < n; j++){
            if (arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    //kamus
    int array[1000], n, i, j;
    //algoritma
    printf("=======Bubble Sorting=======\n");
    printf("Masukan jumlah elemen :");
    scanf("%d", &n);
    printf("Masukan elemen :");
    for(i=0; i<n; i++){
        scanf("%d", &array[i]);
    }
    Bubblesort(array, n);
    printf("Hasil pengurutan adalah :\n");
    for(i=0; i<n; i++){
        printf("%d ",array[i]);
    }
}
