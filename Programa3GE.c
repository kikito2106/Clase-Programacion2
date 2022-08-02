//PROGRAMA 3 GABRIEL ESTRADA CI:29809541//
#include <math.h>
#include <stdio.h>

int res, base;
void funcPotencial();

int main(){
    funcPotencial();
    return 0;
}
void funcPotencial(){
    int base,exp,res;

    printf("Introduzca la base de la potencia: ");
    scanf("%i", &base);
    printf("Introduzca el exponente de la potencia: ");
    scanf("%i", &exp);

    res=pow(base,exp);
    printf("La potencia es: %i\n\n", res);

}




