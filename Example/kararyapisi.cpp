#include<conio.h>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main ()
{
 string metin;
 
 int x=0;
 
 cout<<"X de�erini Giriniz : ";
 getline(cin,metin);
 stringstream(metin)>>x;
 
 if(x<0)
  {
  cout <<"X say�s� Negatif";
  }
  else if(x>0)
  {
  cout <<"X say�s� pozitif";
  }
   else 
  {
  cout <<"X say�s� 0";
  }
  
getch();
return 0;
}
