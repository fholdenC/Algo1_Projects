#include <stdio.h>
#include <stdlib.h>

int islem(int sayi)
{
	int i,mod,toplam=0;
	for(i=sayi;i>0;i=i/10)
	{
		mod=i%10;
		toplam+=mod;
	}
	return toplam;
}

  int main(){
  	
  	int sayi;
  	
  	printf("sayi giriniz: ");
  	scanf("%d",&sayi);
  	
  	printf("%d",islem(sayi));
  	
  	return 0;
  }
