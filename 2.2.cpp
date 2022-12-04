#include <stdio.h>
#include <stdlib.h>

  int main(){
  	
  	int i;
  	int dizi1[10],dizi2[10],temp;
  	
  	for(i=0;i<10;i++)
  	{
  		printf("1.Dizinin %d. elemanini giriniz: ",i+1);
  		scanf("%d",&dizi1[i]);
  		printf("2.dizinin %d. elemanini giriniz: ",i+1);
  		scanf("%d",&dizi2[i]);
	}
  	
  	for(i=0;i<10;i++)
  	{
  		if(i%2==0)
  		{
  			temp=dizi1[i];
  			dizi1[i]=dizi2[i+1];
  			dizi2[i+1]=temp;
		}
	
	}
	
	for(i=0;i<10;i++)
	{
	printf("%d ",dizi1[i]);
   }
  	
  	printf("\n");
  	
  	for(i=0;i<10;i++)
  	{
  	printf("%d ",dizi2[i]);
	}
	
  	return 0;
  }	
