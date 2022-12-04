#include <stdio.h>
#include <stdlib.h>

 int main(){
 	
 	char metin[999],kelime[999];
 	int sayac=0,kontrol=0;
 	int i,j,k;
	  	
 	printf("Metin Giriniz: ");
 	gets(metin);
 	
 	printf("Kelimeyi Giriniz: ");
 	gets(kelime);
 	
 	for(i=0; kelime[i] != '\0'; i++)
	{
	    sayac++;
	}
	for(j=0; metin[j] != '\0'; j++)
	{
	    if(kelime[0] == metin[j])
		{
			kontrol = 0;
			for(k = 0; k < sayac; k++)
			{
				if(kelime[k] == metin[j+k])
				{
					kontrol++;
				}
			}
			if(sayac == kontrol)
			{
				printf("Girdiginiz kelime metinde vardir.\nBaslangic indisi:%d\nBitis indisi:%d", j, j+k-1);
			}
			
		}
	}	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	return 0;
 }
