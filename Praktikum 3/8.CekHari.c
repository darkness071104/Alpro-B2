/* Nama File : 8.CekHari.c*/
/* Deskripsi : menampilkan nama-nama hari dari nomor hari yang diinputkan*/
/* nama Pembuat : 24060121140140-Fauzan Ramadhan Putra*/
/* Tanggal Pembuatan : Jumat, 11 Maret 2022*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{/*Kamus*/
    int d;
 /*Algoritma*/
    printf("Masukkan nomor hari = ");
    scanf("%d", &d);

   if (1 <= d <=7){

        if (d == 1){
            printf ("Senin");
        }
        else if (d == 2){
            printf ("Selasa");
        }
        else if (d == 3){
            printf("Rabu");
        }
        else if (d == 4){
            printf("Kamis");
        }
        else if (d == 5){
            printf("Jumat");
        }
        else if (d == 6){
            printf("Sabtu");
        }
        else if (d == 7) {
            printf("Minggu");
        }
        else{
        printf("Masukan nomor hari tidak tepat");
    }
    return 0;
   }
}
