/* Nama File : 18.FaktorBil.c*/
/* Deskripsi :menentukan faktor-faktor bilangan dari bilangan integer sembarang N (N>0)}*/
/* nama Pembuat : 24060121140140-Fauzan Ramadhan Putra*/
/* Tanggal Pembuatan : Selasa, 15 Maret 2022*/

#include<stdio.h>/*header file*/

/*Program Utama*/
int main()
{
/*Kamus*/
    int N;
    int i;
/*Algoritma*/
    printf("masukan nilai N :");
    scanf("%d", &N);
    if (N <= 0){
    	printf("N harus Positif");
    }	
    else{
    	for(i=1; i <= N; i++){
    		if (N % i == 0){
    			printf("%d ",i);
    		}
    	}
    }
}

