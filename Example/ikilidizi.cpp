#include <conio.h>
#include <iostream>


using namespace std;
#define satir 2
#define sutun 3
 int matris[satir][sutun];
 int i,j;
int main ()
{
 for(i=0;i<satir;i++)
 {
  
       for(j=0;j<sutun;j++)
     {
        matris[i][j] = (i)*(j);
        cout << matris[i][j] << " ";
      
      
     } 
 cout << "\n";
}

getch();
return 0;
}
