#include <stdio.h>
#include <stdlib.h>

int kombinasyon(int n,int r)
{
	int i,islem;
	int n_faktor=1,r_faktor=1,n_r_faktor=1;
	
	for(i=1;i<=n;i++)
	{
		n_faktor=n_faktor*i;
	}
	
	for(i=1;i<=r;i++)
	{
		r_faktor=r_faktor*i;
	}
	
	
	for(i=1;i<=n-r;i++)
	{
		n_r_faktor=n_r_faktor*i;
	}
	 
	return islem=(n_faktor)/(r_faktor * n_r_faktor);
	
}


  int main(){
  	
  	int n,r;
  	
  	printf("C(n,r)'de ki n ve r degerlerini giriniz\n");
  	scanf("%d%d",&n,&r);
  	
  	printf("CEVAP: %d",kombinasyon(n,r));
  	
  	return 0;
  }
