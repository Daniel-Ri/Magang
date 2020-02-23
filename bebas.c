/* File      : bebas.cpp */
/* Tanggal   : 21 Februari 2020 */
/* Topik     : Tugas cakru programming pandago pertama */

#include <stdio.h>
#include "bebas.h"

void PrintHaiNTimes (int N) {
    /* Implementasikan di sini */
    /* KAMUS LOKAL */
    // int i; (untuk looping)
    // i ++ (untuk menaikkan nilai variabel i sebanyak 1 angka)
    /* ALGORITMA */
	  int i;
		  for (i = 1; i<=N; i++) {
		  printf("Hai \n");
		  }
		  return 0;
    }

void GanjilOrGenap (int X) {
    /* Implementasikan di sini */
    /* KAMUS LOKAL */

    /* ALGORITMA */

}

int DeretArit50 () {
    /* Implementasikan di sini */
    /* KAMUS LOKAL */
    int i; //untuk lopping
    int jumlah = 0;//untuk menghitung jumlah deret
    /* ALGORITMA */
    for(i=1;i<=50;i++){
        jumlah = jumlah + i;
    }
return jumlah;
}

void ModNumber (int X, int Y){
    /* Implementasikan di sini */
    /* KAMUS LOKAL */
    int m == 0; //untuk menghitung hasil modulu 

    /* ALGORITMA */
    m = X % Y;
return m;
}

int TambahOrKurang (int A, int B, int C){
    /* Implementasikan di sini */
    /* KAMUS LOKAL */

    /* ALGORITMA */

}

boolean IsPrima (int X){
    /* Implementasikan di sini */
    /* KAMUS LOKAL */
    boolean prima; // untuk menetukan apakah x prima atau bukan
    /* ALGORITMA */
    if ( X==2 || X==3 || X==5 || X==7) {
        prima = true;
    } else {
        prima = false;
    }

    return prima;
}
