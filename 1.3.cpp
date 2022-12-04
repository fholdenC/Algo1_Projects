#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

   int i,sayi;
   int ciftler=1,tekler=0,sayac1=0,sayac2=0;
   float ortalama,geometrikortalama;
   
   for(i=1;i<=4;i++)
  {
   	 printf("%d.Sayiyi Giriniz: ",i);
   	 scanf("%d",&sayi);
   	 
   	 if(sayi%2==0)
   	 {
   	 	ciftler*=sayi;
   	 	sayac1++;
     }
     else
     {
     	tekler+=sayi;
     	sayac2++;
	 }
  }
  
  geometrikortalama=pow(ciftler,pow(sayac1,-1));
  
  if(sayac2!=0)
  {
  ortalama=tekler/sayac2;
  printf("ARITMETIK ORTALAMA: %.2f\n",ortalama);
  }
  else
  {
  	printf("Tek Sayi Girmediniz\n");
  }
   
  if(sayac1!=0)
  {
  	printf("GEOMETRIK ORTALAMA: %.2f\n",geometrikortalama);
  }
  else
  {
  	printf("Cift Sayi Girmediniz\n");
  }
  
 return 0; 
}

