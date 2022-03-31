/* Nama File : 23.Tetris.c*/
/* Deskripsi : menyususn karakter '*' sesuai dengan banyaknya N dimulai dari yang terkecil*/
/* nama Pembuat : 24060121140140-Fauzan Ramadhan Putra*/
/* Tanggal Pembuatan : Jumat, 18 Maret 2022*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
/*Kamus*/
    int N, i, j;

/*Algoritma*/
    printf("Masukkan nilai N : ");
    scanf("%d", &N);
    if (N > 0)
    {
        for (i = 1; i <= N; ++i)
        {
            for (j = 1; j <= i; ++j)
            {
                printf("* ");
            }
            printf("-%d",i);
            printf("\n");
        }
    }
    else
    {
        printf("Masukkan salah");
    }

    return 0;
}
