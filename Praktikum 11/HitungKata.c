/* Nama File : HitungKata.c*/
/* Deskripsi : menghitung jumlah kata dari suatu kalimat*/
/* nama Pembuat : 24060121140140-Fauzan Ramadhan Putra*/
/* Tanggal Pembuatan : Selasa, 17 Mei 2022*/

#include <stdio.h>
#include <conio.h>
#include "mesinkar.c"

#include <stdio.h>
#include <conio.h>
#include "mesinkar.c"

int main(){
    //Kamus
    char str[100];
    int i, JumlahKata;
    //Algoritma

    printf("///Mesin Hitung Kata///\n");

    if (JumlahKata >= 100)
    {
        printf("\nkarakter dalam pita maksimal 100 termasuk titik \n");
    }
    else{
        START();
        i = 0;
        while(!EOP()){
            str[i] = CC;
            ADV();
            i++;
        }

        printf("\n-> Kalimat Yang Dibaca : ");
        for ( i = 0; i < JumlahKata; i++)
        {
            printf("%c", str[i]);
        }

        i = 0;
        JumlahKata = 1;
        while(str[i]!='\0'){
            //Memeriksa karakter
            if(str[i]==' ' || str[i]=='\n' || str[i]=='\t'){
                JumlahKata++;
            }

            i++;
        }

        printf("\n-> Jumlah kata dalam kalimat : %d\n", JumlahKata);
    }

    getch();
    return 0;
}
