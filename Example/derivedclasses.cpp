#include <iostream>
#include <conio.h>
using namespace std;
class Cokgen {
protected:/*alt sınıflar ust sınıflara ulaşabilir anlamında private tanımlarsak ayrıyetten friend tanımlayıp arkadaş oldugunu belirtmemiz gerekir.*/
 int genislik, yukseklik;
   public:
    void degerAta(int a, int b)
    { 
         genislik=a; 
         yukseklik=b;}
    };
    class Dikdortgen: public Cokgen {
        public:
        int alan()
        { 
            return (genislik * yukseklik); }
        };
    class Ucgen: public Cokgen {
    public:
        int alan()
        { 
            return (genislik * yukseklik/2); }
        };
           
        
       
        int main () 
        {
            Dikdortgen ddortgen;
            Ucgen ucgen;
            ddortgen.degerAta (4,5);
            ucgen.degerAta (4,5);
            cout << "Dikdortgen Alani :" << ddortgen.alan()<< endl;
            cout <<  "Ucgenin Alani    :" << ucgen.alan() << endl;
            getch();
            return 0;
        }
