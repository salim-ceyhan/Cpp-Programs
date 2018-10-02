#include<stdio.h>
#include<locale.h>
/*Fahrenhayt-Santigrad tablosunu fahr=0, 20,..., 300;
için hesaplayan kayan noktalý sürüm*/

int main(){
setlocale(LC_ALL,"Turkish");
float fahr, santigrad;
float alt, ust, adim;
alt=0;
ust=300;
adim=20;

fahr=adim;
    printf("Sıcaklık Dönüşümü  Tablosu\n");
    printf("------------------------------\n");
    printf("FAHRENHAYT          DERECE\n");
    printf("----------          ------\n");
while(fahr<=ust){
    santigrad=(5.0/9)*(fahr-32.0);

    printf("%3.0f\t\t %6.1f\n",fahr , santigrad);
    fahr = fahr + adim;
}//end of while

system("PAUSE");
return 0;
}//end of main
