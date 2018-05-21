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
 p=&i;//yalnızca adres saklamak için kullanılır.
 
 cout << "ı'nin Hafızadaki Yeri :" << p <<"\n";
 cout << "p nin gösterdiği adresteki değer  :" << *p <<"\n";
   cout << "p nin adresi : " << &p << "\n";
getch();
return 0;
}
