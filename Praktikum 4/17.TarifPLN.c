/* Nama File : 17.TarifPLN.c*/
/* Deskripsi : menghitung tarif listrik yang dikenakan*/
/* nama Pembuat : 24060121140140-Fauzan Ramadhan Putra*/
/* Tanggal Pembuatan : Sabtu, 12 Maret 2022*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
/*Kamus*/
    int Gol;
    int P;

/*Algoritma*/
    printf("Masukkan Golongan (1 - 2) = ");
    scanf("%d", &Gol);
    printf("Pemakaian Listrik (kWH) = ");
    scanf("%d", &P);

    if (Gol > 0 && Gol < 3 && P >= 0)
    {
        if (Gol == 1)
        {
            if (Gol < 100)
            {
                printf("Tarif Listrik Anda = %d\n", 100 * 1000);
            }
            else if (P >= 100 && P < 1000)
            {
                printf("Tarif Listrik Anda = %d\n", P * 1000);
            }
            else if (P >= 1000)
            {
                printf("Tarif Listrik Anda = %d\n", P * 1000 + (P * 1000)/10);
            }
        }
        else if (Gol == 2)
        {
            if (P < 100)
            {
                printf("Tarif Listrik Anda = %d\n", 100 * 2000);
            }
            else if (P >= 100 && P < 1000)
            {
                printf("Tarif Listrik Anda = %d\n", P * 2000);
            }
            else if (P >= 1000)
            {
                printf("Tarif Listrik Anda = %d\n", P * 2000 + (P * 1000)/10);
            }
        }
    }
    else
    {
        printf("Masukan Tidak Valid");
    }
}
