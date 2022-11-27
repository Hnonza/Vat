#include <stdio.h>
float vat7(float money)
{
     float x;
     x = (money*7) / 100;
     return(x);
}
int main( )
{
     float money,vat;
     vat = vat7(100);
     printf("Vat 7 Percent = %.2f Bahts \n ",vat);
}