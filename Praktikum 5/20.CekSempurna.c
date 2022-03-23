/* Nama File : 20.CekSempurna.c*/
/* Deskripsi :menentukan sebuah bilangan integer sembarang N (N>0) yang dimasukan termasuk bilangan sempurna atau bukan}*/
/* nama Pembuat : 24060121140140-Fauzan Ramadhan Putra*/
/* Tanggal Pembuatan : Selasa, 15 Maret 2022*/

#include <stdio.h> /*header file*/

/*Program Utama*/

int main()
{
    /*Kamus*/
    int N; /* Masukkan */
	int i;
	int jumlah; /* menjumlahkan faktor */

    /*Algoritma*/
    jumlah = 0;
    printf("Masukkan angka : ");
    scanf("%d", &N);
    if (N > 0)
    {
        for (i = 1; i < N; i++)
        {
            if (N % i == 0)
            {
                jumlah = jumlah + i;
            }
        }
        if (N == jumlah)
        {
            printf("%d adalah bilangan sempurna", N);
        }
        else
        {
            printf("%d bukan bilangan sempurna", N);
        }
    }
    else /* N<=0 */
    {
        printf("Masukan salah");
    }

    return 0;
}
