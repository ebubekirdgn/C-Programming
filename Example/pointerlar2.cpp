#include <conio.h>
#include <iostream>


using namespace std;
 
int main ()
{
int s1,s2;
s1=10;
s2=20;
int *p1,*p2;
 p1=&s1;//yalnýzca adres saklamak için kullanýlýr.
 p2=&s2;
 
 p1=p2;
 *p1=20;
   cout << "Sayi 1 :" << s1 <<"\n";
   cout << "Sayi 2 :" << s2 <<"\n";
getch();
return 0;
}
