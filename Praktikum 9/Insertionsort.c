/* Nama File : Insertionsort.c*/
/* Deskripsi : Mengurutkan data Berdasarkan Penyisipan (Insertion Sorting)*/
/* nama Pembuat : 24060121140140-Fauzan Ramadhan Putra*/
/* Tanggal Pembuatan : Selasa, 3 Mei 2022*/

#include <stdio.h> /*header file*/

void Insertionsort(int arr[], int n){
    // Kamus Lokal
    int i, j, temp;
    // Algoritma
    for (i = 1; i < n; i++){
        temp = arr[i];
        for (j = i-1; j >= 0 && arr[j] > temp; j--){
            arr[j+1] = arr[j];
        }
        arr[j+1] = temp;
    }
}

int main(){
    // Kamus
    int array[1000], n, i, j;
    // Algoritma
    printf("=======Insertion Sorting=======\n");
    printf("Masukan jumlah elemen :");
    scanf("%d", &n);
    printf("Masukan elemen :");
    for (i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }
    Insertionsort(array, n);
    printf("Hasil pengurutan adalah :\n");
    for (i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    return 0;
}
