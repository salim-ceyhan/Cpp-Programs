#include<stdio.h>

/*Fahrenhayt-Santigrad tablosunu fahr=0, 20,..., 300;
için hesaplayan kayan noktalý sürüm*/

int main(){

float derece;
    printf("Sıcaklık Dönüşümü  Tablosu\n");
    printf("------------------------------\n");
    printf("FAHRENHAYT          DERECE\n");
    printf("----------          ------\n");

for(derece=300; derece >= 0; derece -= 20){
    printf("%6.0f\t\t %8.1f\n", derece , (9.0/5.0)*(derece+32));}

return 0;
}//end of main
