#include <iostream>
#include <conio.h>
using namespace std;
class Diktorgen{
int genislik,yukseklik;
public:
    void degerAta(int,int);
            int alan (void)
             {
                return (genislik*yukseklik);
             }
             
     };
    void Diktorgen::degerAta(int a, int b) 
            {
            genislik  = a;
            yukseklik= b;
            }
         Dikdortgen::~Dikdortgen()
        {
        delete yukseklik;
        delete genislik;                         
        }  
    int main () 
    {
        Diktorgen a, *b,*c;
        Diktorgen *d = new Diktorgen[2];
        b= new Diktorgen;
        c=&a;
        a.degerAta(1,2);
        b->degerAta(3,4);
        d[0].degerAta(5,6);
        d[1].degerAta(7,8);
        
       
        cout << "a alaný : " << a.alan()<<endl;
        cout << "*b alaný : " << b->alan()<<endl;
        cout << "c alaný : " <<  c->alan()<<endl;
        cout << "d[0] alaný : " <<  d[0].alan()<<endl;
         cout << "d[1] alaný : " <<  d[1].alan()<<endl;
        
        
        delete[] d;
        delete[] b;
        
        
        getch();
        return 0;
    }
