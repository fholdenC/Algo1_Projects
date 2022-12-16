#include <stdio.h>
#include <stdlib.h>


struct ders{
	int ders_kod;
	int vize;
	int final;
	double gecmenotu;
	
};

struct sahis_bilgileri{
	char ad[40];
	char soyad[40];
	int No;
	struct ders dersler[5];
};

struct sahis_bilgileri sahisbilgi();
struct ders dersbilgi();

  int main(){
  	
  	struct sahis_bilgileri bilgi[5];
  	struct ders dersler[5];
  	
  	for(int i=0;i<5;i++)
  	{
  		bilgi[i] = sahisbilgi();
  		
  		for(int j=0;j<5;j++)
  		{
  			bilgi[i].dersler[j] = dersbilgi(); 
		}
	}
	
	for(int k=0;k<5;k++)
	{
		printf("%d Numarali %s %s Adli Ogrencinin: \n",bilgi[k].No,bilgi[k].ad,bilgi[k].soyad);
		
		for(int l=0;l<5;l++)
		{
			printf("%d Kodlu Dersin Vize Notu: %d\n",bilgi[k].dersler[l].ders_kod,bilgi[k].dersler[l].vize);
			printf(" Final Notu: %d Gecme Notu: %.2lf\n",bilgi[k].dersler[l].final,bilgi[k].dersler[l].gecmenotu);
		}
	}
  	

  	return 0;
  }
  
  
  struct sahis_bilgileri sahisbilgi(){
  	
  	struct sahis_bilgileri bilgi;
  	
  	printf("Ogrencinin Ismini Giriniz: ");
  	scanf("%s",bilgi.ad);
  	
  	printf("Ogrencinin Soyadini Giriniz: ");
  	scanf("%s",bilgi.soyad);
  	
  	printf("Ogrencinin Numarasini Giriniz: ");
  	scanf("%d",&bilgi.No);
  	
     return bilgi;
  }
  
  struct ders dersbilgi(){
  	
  	struct ders dersler;
  	
  	printf("Dersin Kodunu Giriniz: ");
  	scanf("%d",&dersler.ders_kod);
  	
  	printf("Vize Notunu Giriniz: ");
  	scanf("%d",&dersler.vize);
  	
  	printf("Final Notunu Giriniz: ");
  	scanf("%d",&dersler.final);
  	
  	dersler.gecmenotu = (double)(dersler.vize*0.4 + dersler.final*0.6);
  	
  	return dersler;
  }
