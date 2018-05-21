#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
    int i,sutun,satir,sayi;
    printf("Sayi giriniz :"); scanf("%d",&sayi);
    for(sutun=1;sutun<=sayi;sutun++)
    {
    	if(sutun==1 || sutun==sayi)
    	{
			for(satir=1;satir<=sayi;satir++)
		    { 
			  if(satir==1 || satir==sayi)
    			{
			    printf("*");	
				}
				
		     	
		    }
    	}
    	if(sutun==sayi/2+1)printf("*");
 		
    		printf("*\n");
    }
 	
	return 0;
}