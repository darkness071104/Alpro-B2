/* Nama File : 22.SiputNaik.c*/
/* Deskripsi : mengetahui berapa hari waktu yang dibutuhkan oleh siput tersebut untuk mencapai ketinggin N meter.*/
/* nama Pembuat : 24060121140140-Fauzan Ramadhan Putra*/
/* Tanggal Pembuatan : Jumat, 18 Maret 2022*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
/*Kamus*/
    float N; 
    float M = 0;
    int hari = 0;
    int run = 1;
/*Algoritma*/
	printf("Masukkan nilai N :");
    scanf("%f", &N);
    if (N > 0)
    {
        while (run == 1)
        {
            M = M + 0.3;
            M = M - 0.1;

            if (M >= N)
            {
                run = 0;
            }
            else
            {
                hari++;
            }
        }
        printf("lama hari yang dibutuhkan adalah : %d", hari);
    }
    else
    {
        printf("Masukkan salah");
    }

    return 0;
}
