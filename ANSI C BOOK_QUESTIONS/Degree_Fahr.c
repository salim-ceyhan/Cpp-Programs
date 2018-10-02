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

santigrad=alt;
    printf("Sýcaklýk Dönüþümü Tablosu\n");
    printf("--------------------------\n");
    printf("DERECE          FAHRENHAYT\n");
    printf("------          ----------\n");
while(santigrad<=ust){
    fahr=(9.0/5)*santigrad+32.0;

    printf("%6.1f\t\t %3.0f\n", santigrad, fahr);
    santigrad = santigrad + adim;
}//end of while

system("PAUSE");
return 0;
}//end of main
