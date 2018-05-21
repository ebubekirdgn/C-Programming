// example on constructors and destructors
#include <iostream>
#include <conio.h>
using namespace std;
    class CRectangle 
    {
    int *genislik, *yukseklik;
    public:
    CRectangle (int,int);
    ~CRectangle ();
int area () 
{
    return (*genislik * *yukseklik);}
};

CRectangle::CRectangle (int a, int b) 
{
genislik = new int;
yukseklik = new int;
*genislik = a;
*yukseklik = b;
}
CRectangle::~CRectangle () {
delete genislik;
delete yukseklik;
}
int main () {
CRectangle rect (3,4), rectb (5,6);
cout << "Diktortgenin Alani : " << rect.area() << endl;
cout << "Karenin Alani      :" << rectb.area() << endl;
getch();
return 0;
}
