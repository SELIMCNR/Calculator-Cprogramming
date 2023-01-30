#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		setlocale(LC_ALL, "Turkish");
	printf("------------------------------        Hesap Makinesi           ----------------------- \n  1.Ýþlem toplama iþlemi yapar. \n 2.iþlem cikarma iþlemi yapar \n 3.iþlem çarpma iþlemi yapar.\n 4.iþlem bolme iþlemi yapar \n 5.iþlem karekök alma \n 6.iþlem üslü sayýsýný bulur \n 7.iþlem bölümden kalaný bulur  ");
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
 printf("X karekökü = %lf\n",x);	
 printf("Y karekökü = %lf\n",y);	
 break;
 case 6:
 	x=pow(x,y);
 	printf("Üslü sonucu = %lf \n",x);
 	break;
 case 7:
 	x=(int)x % (int)y;
	printf("Bölümden kalan = %lf \n",x); 	
	break;
 default:
 printf("Yanlis secim");
}
getchar();
return 0;
}
	
