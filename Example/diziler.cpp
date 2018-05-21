#include <conio.h>
#include <iostream>
using namespace std;
int main ()
{
 
 int fatura[]={10,20,30,40,50,60,70};
 int i,toplam=0;
 for(i=0;i<=6;i++)
 {
   toplam=toplam+fatura[i];
 }
 cout << "Toplamý  : " << toplam << "\n";
getch();
return 0;
}
