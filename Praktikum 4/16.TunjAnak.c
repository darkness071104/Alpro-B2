/* Nama File : 16.TunjAnak.c*/
/* Deskripsi : menghitung dan menampilkan besar tunjangan yang diberikan, dengan aturan yang ada*/
/* nama Pembuat : 24060121140140-Fauzan Ramadhan Putra*/
/* Tanggal Pembuatan : Sabtu, 12 Maret 2022*/

#include <stdio.h>/*header file*/

/*Program Utama*/
int main()
{
/*Kamus*/
    int A;
    int G;
    int T;

/*Algoritma*/
    printf("jumlah anak = ");
    scanf("%d", &A);
    printf("besar gaji = ");
    scanf("%d", &G);

    if (A >= 0 && A <= 3){
        T = A * (G * 10/100);
    }
    else{
        T = 3 * (G * 0/100);
    }
    printf("Besarnya tunjangan anak adalah = %d", T);
}
