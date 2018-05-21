#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 
int main()
{
 int a[10],i,j,n,temp;
 
 printf("Dizi Eleman sayisini giriniz :\n"); scanf("%d",&n);
 
 printf("Dizi Degerlerini giriniz :");
		 for(i=0;i<n;i++)
		 {
		 	scanf("%d",&a[i]);
		 } 
		 i=0;
		 j=n-1;
		 while(i<j)
		 {
		 	temp=a[i];
		 	a[i]=a[j];
		 	a[j]=temp;
		 	i++;
		 	j--;
		 }
		 for(i=0;i<n;i++)
		 {
		 printf("%d",a[i]);
		 }
		 
	 
}
