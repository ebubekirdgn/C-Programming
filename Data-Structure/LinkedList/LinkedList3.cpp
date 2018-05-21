#include <stdio.h>
#include <stdlib.h>
 
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
	   	printf("%d ",r->x);
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
// sirali ekleme islemi burada basliyor
node * EkleSirali(node *r,int x) //node * turunde sonuc donderiyoruz.
{
	if(r==NULL) // LinkList bossa kutusunu olusturduk.
	{
	    r = (node *)malloc(sizeof(node));//create box 
		r-> next = NULL;
		r->x=x;
	 	return r;
	} 
	 if(r->x >x) // ilk elemandan küçük olma durumu
	{
		//Root degisiyor burada
	    node * temp = (node *)malloc(sizeof(node));
	    temp -> x = x;
	    temp -> next = r;
	    return temp;
	}
	node * iter = r;
	while(iter->next !=NULL && iter->next->x < x)
	{
		iter = iter -> next;	
	}
	node * temp  = (node *)malloc(sizeof(node));
	temp -> next = iter ->next;
	iter -> next = temp;
	temp -> x = x;
	return r;	 
}
int main(int argc, char** argv) 
{
	 node * root;
	 root = NULL;
	 root =EkleSirali(root,300);
	 root = EkleSirali(root,200);
	 root =EkleSirali(root,1);
	 root =EkleSirali(root,50);
	 root =EkleSirali(root,8);
	
         bastir(root);
}
