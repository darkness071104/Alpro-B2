/* Nama File : 25.Tetris2.c*/
/* Deskripsi : menyususn karakter '*' sesuai dengan banyaknya N dimulai dari yang terkecil, ketika jumlah '*' sama dengan N
			   maka jumlah'*' akan berkurang sampai angka terkecil lagi*/
/* nama Pembuat : 24060121140140-Fauzan Ramadhan Putra*/
/* Tanggal Pembuatan : Jumat, 18 Maret 2022*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
/*Kamus*/
    int N, i, j, P;

/*Algoritma*/
    printf("Masukkan nilai N : ");
    scanf("%d", &N);
    P = N * 2 - 1;

    if (N > 0)
    {
        for (i = 1; i <= P; ++i)
        {
            for (j = 1; j <= i; ++j)
            {
                if (i <= N)
                {
                    printf("* ");
                }
                else if (i > N && j <= P - i + 1)
                {
                    printf("* ");
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf("Masukkan salah");
    }

    return 0;
}
