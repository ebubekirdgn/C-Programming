#include <conio.h>
#include <iostream>
using namespace std;
int main ()
{
 
 int fatura[5];
 int i,toplam=0,sayi;
 for(i=0;i<=4;i++)
 {
   cout << "Dizinin " << i <<".nci eleman�n� giriniz :";
   cin >> fatura[i];
   toplam=toplam+fatura[i];
 }

cout << "Toplam�  : " << toplam << "\n";
getch();
return 0;
}
