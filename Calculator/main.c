#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		setlocale(LC_ALL, "Turkish");
	printf("------------------------------        Hesap Makinesi           ----------------------- \n  1.��lem toplama i�lemi yapar. \n 2.i�lem cikarma i�lemi yapar \n 3.i�lem �arpma i�lemi yapar.\n 4.i�lem bolme i�lemi yapar \n 5.i�lem karek�k alma \n 6.i�lem �sl� say�s�n� bulur \n 7.i�lem b�l�mden kalan� bulur  ");
double x,y;
int secim;
float sonuc;
printf("\niki Sayi Giriniz=");
scanf_s("%lf %lf",&x,&y);
printf("Seciminiz=");
scanf_s("%d",&secim);
switch (secim)
{
 case 1: 
 sonuc = x + y;
 printf("Toplam = %f\n",sonuc);
 break;
 case 2:
 sonuc = x-y;
 printf("Fark = %f\n",sonuc);
 break;
 case 3:
 sonuc = x * y;
 printf("Carpim = %f\n",sonuc);
 break;
 case 4:
 sonuc =(float) x/y;
 printf("Bolum = %f\n",sonuc);
 break;
 case 5:
 	x=sqrt(x);
 	y=sqrt(y);
 printf("X karek�k� = %lf\n",x);	
 printf("Y karek�k� = %lf\n",y);	
 break;
 case 6:
 	x=pow(x,y);
 	printf("�sl� sonucu = %lf \n",x);
 	break;
 case 7:
 	x=(int)x % (int)y;
	printf("B�l�mden kalan = %lf \n",x); 	
	break;
 default:
 printf("Yanlis secim");
}
getchar();
return 0;
}
	
