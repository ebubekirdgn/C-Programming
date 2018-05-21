#include<conio.h>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main ()
{
 string metin;
 
 int a,b,gecici;
 
 cout<<"a deðerini Giriniz : ";
 getline(cin,metin);
 stringstream(metin)>>a;
 
 cout<<"b deðerini Giriniz : ";
 getline(cin,metin);
 stringstream(metin)>>b;
 
 if(a<b)
 {
  gecici=a;
  a=b;
  b=gecici;
     
 }
 else
 {
     
     }
cout <<"a deðerini buyuk : " << a <<"......"<< b << "\n"; 
getch();
return 0;
}
