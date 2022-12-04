#include <stdio.h>

int main(){

  int vize,final,but,ortalama;
  
  printf("Vize Notunuzu Giriniz: ");
  scanf("%d",&vize);
  
  printf("Final Notunuzu Giriniz: ");
  scanf("%d",&final);
  
  ortalama=(vize*0.4)+(final*0.6);
  
  if(ortalama>=60)
  {
  	printf("TEBRIKLER GECTINIZ");
  }
  else if(ortalama<60)
  {
  	printf("But Notunuzu Giriniz: ");
  	scanf("%d",&but);
  	ortalama=(vize*0.4)+(but*0.6);
  
  if(ortalama>=60)
  {
  	printf("TEBRIKLER GECTINIZ");
  }
  else
  {
  	printf("KALDINIZ");
  }
  
  }
  return 0;
}
