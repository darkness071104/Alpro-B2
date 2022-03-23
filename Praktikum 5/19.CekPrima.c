
/* Nama File : 19.CekPrima.c*/
/* Deskripsi : menentukan sebuah bilangan integer sembarang N (N>0) yang diinputkan termasuk bilangan prima atau bukan}*/
/* nama Pembuat : 24060121140140-Fauzan Ramadhan Putra*/
/* Tanggal Pembuatan : Selasa, 15 Maret 2022*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
/*Kamus*/
    int N; 
    int i;
    int j;

/*Algoritma*/
	j=0;
    printf("Masukkan nilai N : ");
    scanf("%d", &N);
    if (N <= 0)
    {
		printf("N harus positif");
    }
    else 
    {
        for (i = 1; i <= N; i++)
        {
            if (N % i == 0)
            {
                j++;
            }
        }
        if (j == 2)
        {
            printf("%d adalah bilangan prima", N);
        }
        else
        {
            printf("%d bukan bilangan prima", N);
        }        
    }

    return 0;
}
