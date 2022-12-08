#include <stdio.h>
#include <stdlib.h>

int asal_sayi(int sayi)
{
	int i,sayac=0;
	
	for(i=1;i<=sayi;i++)
	{
		if(sayi%i==0)
		{
			sayac++;
		}
	}
	return sayac;
}

  int main(){
  	
  	int sayi,islem;
  	
  	printf("sayiyi giriniz: ");
  	scanf("%d",&sayi);
  	
    islem=asal_sayi(sayi);
  	
  	if(islem==2)
  	{
  		printf("%d sayisi asal sayidir",sayi);
	}
	else
	{
		printf("%d sayisi asal sayi degildir",sayi);
	}
  	
  	
  	
  	
  	
  	
  	
  	return 0;
  }
