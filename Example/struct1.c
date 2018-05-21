#include <stdio.h>
#include <stdlib.h>

struct kayit
{
char ad[10];
long no;
int sinif;	
};

int main()
{
struct kayit ogr;


printf("Ogrencinin Numarasi : "); scanf("%ld",&ogr.no);
printf("Ogrencinin Adi      : "); scanf("%s",&ogr.ad);
printf("Ogrencinin Sinifi   : "); scanf("%d",&ogr.sinif);

printf("\n***** ---> Girilen bilgiler <--- *****");
   printf("\nNo    : %ld",ogr.no);
   printf("\nAdi   : %s ",ogr.ad);
   printf("\nSinifi: %d ",ogr.sinif);

	return 0;
}