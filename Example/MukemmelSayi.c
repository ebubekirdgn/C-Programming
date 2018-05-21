#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int toplam=0,i,j,bitis;
	printf("Mükemmel sayi icin merak ettiginiz araligi giriniz: ");
	scanf("%d",&bitis);
	
	printf("\n1 ile %d arasindaki Mukemmel Sayilar :\n",bitis);
	for(i=1;i<=bitis;i++)
	{
		toplam=0;
		for(j=1;j<=i/2;j++)
		{
			if(i%j==0) 
			{
			toplam+=j;	
			
			}		 
		}
	 if(toplam==i) printf("-> %d\n",toplam);			
	}
	return 0;
}