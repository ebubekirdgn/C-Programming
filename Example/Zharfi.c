#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
    int i,sutun,satir,sayi=5,j;
     
    for(satir=1;satir<=sayi;satir++)
    {
    	if(satir==1 || satir==sayi)
    	{
			for(sutun=1;sutun<=sayi;sutun++) printf("*");
    		printf("\n");
		}
    
    	else
    	{	for(j=sayi-1;j>=satir;j--)printf(" "); 
    	   
			printf("*\n");
    	}
    	
    }
 	
	return 0;
}