// classes example
#include <iostream>
using namespace std;
class Dikdortgen {
int x, y;
public:
void degerAta (int,int);

int alan()
 {
 return (x*y);
 }
 
};
void Dikdortgen::degerAta (int a, int b) {
x = a;
y = b;
}
int main ()
{
Dikdortgen ddortgen;
ddortgen.degerAta (3,4);
cout << "Alan: " << ddortgen.alan();
getch();
return 0;
}
