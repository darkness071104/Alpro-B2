/* Nama File : 10.CekSeriPositif.c*/
/* Deskripsi : menampilkan total tahanan jika dirangkai seri*/
/* nama Pembuat : 24060121140140-Fauzan Ramadhan Putra*/
/* Tanggal Pembuatan : Jumat, 11 Maret 2022*/

#include <stdio.h>/*header file*/

/*Program Utama*/
int main()
{/*Kamus*/
    int T1,T2,T3,T;
 /*Algoritma*/
    printf("Program menghitung total tahanan rangkaian seri \n");
    printf("Masukkan nilai T1 = ");
    scanf("%d",&T1);
    printf("Masukkan nilai T2 = ");
    scanf("%d",&T2);
    printf("Masukkan nilai T3 = ");
    scanf("%d",&T3);
    if (T1 >= 0 && T2 >=0 && T3 >=0) {
        T = T1 + T2 + T3;
        printf("Maka total tahanan adalah %d",T);
    }
    else {
        printf("Masukkan tahanan tidak boleh negatif");
    }
    return 0;
}
