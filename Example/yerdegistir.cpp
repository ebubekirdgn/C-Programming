#include<conio.h>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main ()
{
 string metin;
 
 int a,b,gecici;
 
 cout<<"a de�erini Giriniz : ";
 getline(cin,metin);
 stringstream(metin)>>a;
 
 cout<<"b de�erini Giriniz : ";
 getline(cin,metin);
 stringstream(metin)>>b;
 
  gecici=a;
  a=b;
  b=gecici;
   cout << "\n";
  cout <<"a de�erini Giriniz : " << a << "\n";
  cout <<"b de�erini Giriniz : " << b << "\n";
getch();
return 0;
}
