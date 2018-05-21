// function example
#include <conio.h>
#include <iostream>
using namespace std;
int toplama (int a, int b)
{
int r;
r=a+b;
return (r);
}
int cikar (int a, int b)
{
int r;
r=a-b;
return (r);
}

int main ()
{
int z,y;
y = cikar (5,3);
z = toplama (5,3);
cout << "Toplamý  : " << z << "\n";
cout << "Cikartma  : " << y << "\n";
getch();
return 0;
}
