#include <stdio.h>
#include <stdlib.h>

  int main(){
  	
  	int i,sonuc,sayac1=0,sayac2=0;
  	char dizi[999];
  	
  	printf("Metin Giriniz: ");
  	gets(dizi);
  	
  	for(i=0;i<dizi[i];i++)
  	{
  		
  		if( dizi[i-1] == ' ' && dizi[i] != ' ')
  		{
  		   sayac1++;	
		}
		if(dizi[i+1] == ' ' && dizi[i-1] == ' ' && dizi[i] != ' ')
  		{
  			sayac2++;
		}
		
	}
	
    sonuc=(sayac1+1)-sayac2;
    printf("KELIME SAYISI: %d",sonuc);
    
  	return 0;
  }
