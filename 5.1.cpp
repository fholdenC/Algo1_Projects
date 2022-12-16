#include <stdio.h>
#include <stdlib.h>

struct isci{
   		
   		char ad[30];
   		char soyad[30];
   		int yas;
   		double aylikucret;
   		
	   };
	   
struct isci bilgialma();

   int main(){
   	
   	struct isci isci1;
   	isci1=bilgialma();
   	
   	printf("***ISCI BILGILERI***\n");
   	printf("iscinin adi: %s\n",isci1.ad);
   	printf("iscinin soyadi: %s\n",isci1.soyad);
   	printf("iscinin yasi: %d\n",isci1.yas);
   	printf("iscinin maasi:%.2lf",isci1.aylikucret);
   	
   	
   	return 0;
   }
   
   struct isci bilgialma(){
   	
   	struct isci isci1;
   	
   	printf("iscinin ismini giriniz: ");
   	scanf("%s",isci1.ad);
   	
   	printf("iscinin soyadini giriniz: ");
   	scanf("%s",isci1.soyad);
   	
   	printf("iscinin yasini giriniz: ");
   	scanf("%d",&isci1.yas);
   	
   	printf("iscinin maasini giriniz: ");
   	scanf("%lf",&isci1.aylikucret);
   	
   	return isci1;
   	
   }
   
   
