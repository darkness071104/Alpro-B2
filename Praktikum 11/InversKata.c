/* Nama File : InversPita.c*/
/* Deskripsi : membalik susunan dari sebuah kalimat*/
/* nama Pembuat : 24060121140140-Fauzan Ramadhan Putra*/
/* Tanggal Pembuatan : Selasa, 17 Mei 2022*/

#include <stdio.h>
#include <conio.h>
#include "mesinkar.c"

int main(){
/*Kamus*/
    int LengthPita;
    char ArrChar[100];
    int i;

/*Algoritma*/
    printf("///Mesin invers Kata///\n");

    LengthPita = HitungChar();

    START();

    i = 0;
    while(!EOP()){
        ArrChar[i] = CC;
        ADV();
        i++;
    }

    printf("\n-> Kalimat Sebelum Invers : ");
    for (int j = 0; j < LengthPita; j++) {
        printf("%c", ArrChar[j]);
    }

    printf("\n-> Kalimat Sesudah Invers : ");
    for (int j = LengthPita - 1; j >= 0; j--) {
        printf("%c", ArrChar[j]);
    }
    printf("\n");
    getch();
    return 0;
}
