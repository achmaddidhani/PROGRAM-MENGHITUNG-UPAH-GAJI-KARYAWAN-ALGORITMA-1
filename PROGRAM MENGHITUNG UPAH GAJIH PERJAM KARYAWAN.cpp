#include<stdio.h>
#include<conio.h>
int main()
{
	
char nama[50];
long upah,jam;
printf("								PROGRAM MENGHITUNG UPAH GAJIH PER JAM SEORANG PEGAWAI\n");
printf("										BY ACHMAD DIDHANI NIM 311810294\n");
printf("									INSITUT PELITA BANGSA. TEKHNIK INFORMATIKA\n\n");
printf("Masukan Nama Karyawan : ");scanf("%[^\n]",&nama);
printf("jam kerja : ");scanf("%i",&jam);
printf("---------------------------------------------\n");
upah=5000*jam;
printf("nama karyawan : %s\n",nama);
printf("upah kerja :Rp %d ",upah);
getch();
}
