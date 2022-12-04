#include <stdio.h>
#include <stdlib.h>

  int main(){
  	
  	int i,dizi[50];
  	int toplam=0,sayac1=0,sayac2=0,sayac3=0,sayac4=0;
  	float ort;
  	
  	for(i=0;i<50;i++)
  	{
  	  printf("%d.Sayiyi Giriniz: ",i+1);
	  scanf("%d",&dizi[i]);
	  sayac1++;
	  toplam+=dizi[i];
	}
	
  	ort=(float)toplam/sayac1;
  	
    for(i=0;i<50;i++)
    {
    	if(dizi[i]>ort)
    	{
    		sayac2++;
		}
		else if(dizi[i]<ort)
		{
			sayac3++;
		}
		else
		{
			sayac4++;
		}
	}
  	printf("ORTALAMA: %.2f\n",ort);
  	printf("ORTALAMANIN USTUNDEKILERIN SAYISI: %d\n",sayac2);
  	printf("ORTALAMANUN ALTINDAKILERIN SAYISI: %d\n",sayac3);
  	printf("ORTALAMAYA ESIT OLANLARIN SAYISI: %d",sayac4);
  	
  	return 0;
  }
