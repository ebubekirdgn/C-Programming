#include <stdio.h>
#include <stdlib.h>

struct Meyve
{
 float agirlik;
 float fiyat;
};

int main()
{
struct Meyve *muz,elma;

float muzTutar, elmaTutar;
//muz meyve tipinde bir g�sterici

muz = (struct Meyve*) malloc(sizeof(struct Meyve));
muz ->agirlik = 2.50;
muz ->fiyat = 3.50;
muzTutar = muz->fiyat * muz ->agirlik;

 /* elma Meyve tipinde bir de�isken */
   elma.agirlik = 2.00;
   elma.fiyat   = 1.75;
   elmaTutar = elma.fiyat * elma.agirlik;
   
printf("Meyve \t Agirlik \t Birim Fiyati \t TUTAR(TL)\n");
printf("----- \t ------- \t ------------ \t ---------\n");
printf("Muz   \t  %7.2f  \t  %7.2f    \t   %7.2f  \n",muz->agirlik, muz->fiyat, muzTutar);
printf("Elma   \t  %7.2f  \t  %7.2f    \t   %7.2f  \n",elma.agirlik, elma.fiyat, elmaTutar);

	return 0;
}