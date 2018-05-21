#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct n
{
	int x;
	n * next;
};

typedef n node;

void bastir(node * r)
{
	   while(r!=NULL)
	   {
	   	printf("%d",r->x);
	   	r= r->next;
	   }
}
void ekle(node *r,int x)
{
	while(r->next!=NULL)
	{
		r = r->next;
	}
	r->next = (node *)malloc(sizeof(node)); //create box r-> next 	
	r->next->x = x;
	r->next->next=NULL;
}
int main()
{
	 node * root;
	 root = (node *)malloc(sizeof(node));//create box 
	 root-> next = NULL;
	 root -> x=400;
	 int i=0;
	 for(i=0;i<5;i++)
		ekle(root,i*10);

	 bastir(root);
}
