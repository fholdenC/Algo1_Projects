#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char dizi[999];
	int i;
	
	printf("Metin Giriniz: ");
	gets(dizi);
	
	for(i=0;dizi[i]!='\0'; i++)
	{
		if(dizi[i]<=90 && 65<=dizi[i]) 
		{
			dizi[i] = dizi[i] + 32;
		}
		else if(dizi[i]<=122 && 97<=dizi[i]) 
		{
			dizi[i] = dizi[i] - 32;
		}
	}
	printf("%s",dizi);
	
	return 0;
}
