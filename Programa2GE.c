//PROGRAMA 2 GABRIEL ESTRADA CI:29809541//
#include <stdio.h>
#include <conio.h>
#include <math.h>

void s();
void r();
void m();
void d();

int main(){
    printf("Calculadora de operaciones aritmeticas de numeros enteros: ");

    int op;

    printf("\n\n1.Suma \n2.Resta \n3.Multiplicacion \n4.Division\n");
    printf("\n\n¿Que operacion desea realizar?\n\n\: ");
    scanf("%d", &op);

        switch (op){
             case 1:
             s();
             break;
             case 2:
             r();
             break;
             case 3:
             m();
             break;
             case 4:
             d();
             break;
             }
    getch();
    return 0;
}

void s(){
  int n1,n2,r;
    printf("Ingrese el primer numero a sumar: ");
    scanf("%i", &n1);
    printf("\n\nIngrese el segundo numero a sumar: ");
    scanf("%i", &n2);
         r=n1 + n2;
    printf("\nEl resultado de la suma es: %i", r);
}
void r(){
  int n1, n2, res;
    printf("Ingrese el primer numero a restar: ");
    scanf("%i", &n1);
    printf("\n\nIngrese el segundo numero a restar: ");
    scanf("%i", &n2);

    res=n1-n2;
    printf("El resultado de la resta es: %i", res);
}
void m(){
  int n1, n2, res;
    printf("Ingrese el primer numero a multiplicar: ");
    scanf("%i", &n1);
    printf("\n\nIngrese el segundo numero a multiplicar: ");
    scanf("%i", &n2);

    res=n1*n2;
    printf("El resultado de la multiplicacion es: %i", res);
}
void d(){
  int n1, n2, res;
    printf("Ingrese el numero a dividir: ");
    scanf("%i", &n1);
    printf("\n\nIngrese el numero divisor: ");
    scanf("%i", &n2);

    res=n1/n2;
    printf("El resultado de la division es: %i", res);
}

