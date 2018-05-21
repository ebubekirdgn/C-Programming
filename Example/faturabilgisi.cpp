#include<conio.h>
#include<iostream>
#include<sstream>

using namespace std;
 int fatura[5];
 int i,toplam;
 
int main()
{
    for(i=0;i<=4;i++)
    {
       cout<< i+1 << ".Fatura Tutarýnýzý Giriniz :"<<"\n";
       cin >>fatura[i];
       toplam =toplam + fatura[i];             
    }
    cout<<"\n\n"<<"Toplam Odenecek Tutar : " << toplam << "TL'dir"; 
getch();
return(0);
}

