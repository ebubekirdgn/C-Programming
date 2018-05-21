#include<conio.h>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main ()
{
 string metin;
 
 int x=0;
 
 cout<<"X deðerini Giriniz : ";
 getline(cin,metin);
 stringstream(metin)>>x;
 
 if(x<0)
  {
  cout <<"X sayýsý Negatif";
  }
  else if(x>0)
  {
  cout <<"X sayýsý pozitif";
  }
   else 
  {
  cout <<"X sayýsý 0";
  }
  
getch();
return 0;
}
