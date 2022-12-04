#include <stdio.h>

int main(){

   int i,sayi;
   float ortalama,sayac=0,toplam=0;
   
   printf("Sayiyi Giriniz: ");
   scanf("%d",&sayi);
   
   for(i=0;i<=sayi;i++)
   {
   	  if(i%2==0)
   	  {
   	  	 toplam += i;
   	  	 sayac++;
	  }
	  
   }
   
   ortalama=toplam/sayac;
   
   printf("TOPLAM: %.2f\n",toplam);
   printf("ORTALAMA: %.2f",ortalama);
   
 return 0;  
}
