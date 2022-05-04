/* Nama File : Selectionsort.c*/
/* Deskripsi : melakukan pencarian index dengan isi nilai terkecil setelah itu ditukar dengan isi index yang lebih besar dari index dengan nilai terkecil itu, selanjutnya index terkecil kedua akan disimpan pada variable tmp (sementara) lalu ditukar dengan index kedua dan berulang terus sampai semua selesai terurut.(Selection Sort)*/
/* nama Pembuat : 24060121140140-Fauzan Ramadhan Putra*/
/* Tanggal Pembuatan : Rabu, 4 Mei 2022*/

#include <stdio.h>

void selectionsort(int arr[], int n){
    int i, j, posisi, temp;
    for (i = 0; i < n-1; i++){
        posisi = i;
        for (j = i+1; j < n; j++){
            if (arr[j] < arr[posisi]){
                posisi = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[posisi];
        arr[posisi] = temp;
    }
}

int main(){
    // Kamus
    int array[1000], n, i, j;
    // Algoritma
    printf("=======Selection Sort=======\n");
    printf("Masukan jumlah elemen :");
    scanf("%d", &n);
    printf("Masukan elemen :");
    for (i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }
    selectionsort(array, n);
    printf("Hasil pengurutan adalah :\n");
    for (i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    return 0;
}
