//PROGRAMA 1 GAB[RIEL ESTRADA CI:29809541//

#include <math.h>
#include <stdio.h>

int main(){

    float num;
    int ent;
    float dec;

        printf("Ingrese el numero al que se desea sacar su parte decimal: ");
        scanf("%f", &num);

        ent=num;
        dec=num-ent;

        printf("\n\nLa parte decimal es: %f", dec);

return 0;
}
