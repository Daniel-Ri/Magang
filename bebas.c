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
		  
}
void GanjilOrGenap (int X){
/* Jika X adalah bilangan ganjil maka muncul pesan
*/
/*    std::string Xstr = to_string(X);
*/
    char Xstr[100];
    sprintf(Xstr, "%d", X);
	if(X%2==0){
		printf(" %s adalah bilangan genap\n", Xstr);
    }
	else{
		printf(" %s adalah bilangan ganjil\n", Xstr);	}
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
/* Mengirimkan hasil dari X mod Y ke layar (diakhiri newline) */
/* Contoh : X = 10; Y = 3
   Output : 
   Hasil dari 10 mod 3 adalah 1 */
   int Z = Z%Y;
   // Integer to String
   char Xst[100] ;
   char Yst[100] ;
   char Zst[100] ;
   sprintf(Xst,"%d",X);
   sprintf(Yst,"%d",Y);
   sprintf(Zst,"%d",Z);
   // End of int_str
   
   printf("Hasil dari %s mod %s adalah %s \n", Xst,Yst, Zst);

}

int TambahOrKurang (int A, int B, int C){
    /* Menambah atau mengurangkan B dengan C sesuai instruksi pada A */
    /* A adalah bilangan yang menunjukkan operasi apa yang digunakan, B dan C yang dioperasikan */
    int D;
    /* ALGORITMA */
    printf("Masukkan A: ");
    scanf("%d", &A);
    printf("Masukkan B: ");
    scanf("%d", &B);
    printf("Masukkan C: ");
    scanf("%d", &C);
    if (A%2==0){
        D=B-C;
    }
    else {
    	D=B+C;
	}
	printf("Hasilnya adalah = %d",D);
	
	return 0;
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
