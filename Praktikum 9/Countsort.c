/* Nama File : Countsort.c*/
/* Deskripsi : Mengurutkan data Berdasarkan frekuensi atau banyaknya kemunculan data(Counting Sort)*/
/* nama Pembuat : 24060121140140-Fauzan Ramadhan Putra*/
/* Tanggal Pembuatan : Rabu, 4 Mei 2022*/

#include <stdio.h>

void Countsort(int arr[], int n)
{
    int i, j, temp, ind;
    for(i = 0; i < n; i++){
        ind = i;
        for(j = i+1; j < n; j++){
            if(arr[j] < arr[ind]){
                ind = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[ind];
        arr[ind] = temp;
    }
}
int main(){
    // Kamus
    int array[1000], n, i, j;
    // Algoritma
    printf("=======Counting Sort=======\n");
    printf("Masukan jumlah elemen :");
    scanf("%d", &n);
    printf("Masukan elemen :");
    for (i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }
    Countsort(array, n);
    printf("Hasil pengurutan adalah :\n");
    for (i = 0; i < n; i++){
        printf("%d ", array[i]);
    };
    return 0;
}
