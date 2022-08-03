//FIBONACCI GABRIEL ESTRADA C.I:29809541//
#include <stdio.h>
#include <stdlib.h>


int main(void){
    int num;
 for (num=0; num<=20; num++){
    printf("%d\n", fbnc(num));
 }
 system("PAUSE");
 return 0;
}

int fbnc(int n)
{
 if (n>2)
    return fbnc(n-1)+fbnc(n-2);
 else if (n=2)
    return 1;
 else if (n=1)
    return 1;
 else if (n=0)
    return 0;
 }








