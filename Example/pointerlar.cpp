#include <conio.h>
#include <iostream>


using namespace std;
#define satir 2
#define sutun 3
 int matris[satir][sutun];
 int i,j;
int main ()
{
 int i=5;
 int *p;
 p=&i;//yaln�zca adres saklamak i�in kullan�l�r.
 
 cout << "�'nin Haf�zadaki Yeri :" << p <<"\n";
 cout << "p nin g�sterdi�i adresteki de�er  :" << *p <<"\n";
   cout << "p nin adresi : " << &p << "\n";
getch();
return 0;
}
