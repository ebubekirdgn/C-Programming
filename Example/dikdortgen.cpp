#include <iostream>
#include <conio.h>
using namespace std;
class Diktorgen{
int x, y;
public:
    void degerAta(int,int);
            int alan ()
             {
                return (x*y);
             }
             int cevre ()
             {
                return (x+y)*2;
             }
     };
    void Diktorgen::degerAta(int a, int b) 
            {
            x = a;
            y = b;
            }
    int main () 
    {
        Diktorgen ddortgen1;
        Diktorgen ddortgen2;
        ddortgen1.degerAta (3,4);
        ddortgen2.degerAta (2,4);
        cout << "Alaný: " << ddortgen1.alan()<<"\n";
        cout << "Cevresý : " << ddortgen2.cevre();
        getch();
        return 0;
    }
