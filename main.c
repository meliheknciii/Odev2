#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main() {
	char cumle[100];
    char krk;
    int anahtar,i;
    printf("Buyuk harfle yaziniz\n");
    printf("Bir cumle giriniz\n");
    gets(cumle); // gets fonksiyonu scanf gibi kullanicidan veri alinmasini gerceklestirir.
    printf("Anahtar :");
    scanf("%d",&anahtar); // deger girilir.
    for(i=0;i<strlen(cumle);i++) // strlen fonk girilen cumlededeki harf sayisini sayar
    {
     if(cumle[i]==' ')
     {
      printf(" ");
      continue;
     }   
     else
     {
      krk = (char) (((int) cumle[i]-65+anahtar)%26+65);
       printf("%c",krk);
     }
    }
    printf("\n");
    system("\npause"); 
	
	   return 0;
}
