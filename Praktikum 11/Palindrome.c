/* Nama File : Palindrome.c*/
/* Deskripsi : menentukan apakah sebuah kata adalah palindrome*/
/* nama Pembuat : 24060121140140-Fauzan Ramadhan Putra*/
/* Tanggal Pembuatan : Selasa, 17 Mei 2022*/

#include <stdio.h>
#include <conio.h>
#include "mesinkar.c"

int main(){
    /*Kamus*/
    char str[100]; // variable str untuk menampung kalimat yang ingin di cek palindrome atau bukan
    int i, len, temp = 0;
    int flag = 0;
    len = strlen(str); // variable len diisi dengan nilai sebesar ukuran kalimat dalam variable str

    /*Algoritma*/
    len = HitungChar();

    printf("///Mesin Cek Palindrome///\n");

    if (len >= 100 )
    {
        printf("\n karakter dalam pita maksimal 100 termasuk titik \n");
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
        for ( i = 0; i < len; i++)
        {
            printf("%c", str[i]);
        }

        for(i=0;i < len ;i++){
            if(str[i] != str[len-i-1]) {
                temp = 1;
                break;
            }
        }

        if (temp == 0) {
            printf("\n-> Kalimat/Kata Adalah Palindrome.\n");
        }
        else {
            printf("\n-> Kalimat/Kata Bukan Palindrome.\n");
        }

    getch();
    return 0;
    }
}
