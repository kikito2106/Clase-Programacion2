//GABRIEL ESTRADA EVALUATIVO 1 CI: 29809541//

#include<stdio.h>
#include<conio.h>
#include<math.h>

void f();
void v();
void m();

int main(){
   int opcion;

   printf("1-.Calcular las raices de un polinomio de grado 2. \n2-.Calcular el volumen de una esfera. \n3-.Calcular el desplazamiento de un movil en M.R.U.V.");
   printf("\n\nDigite alguna de las opciones anteriores:...");
   scanf("%d",&opcion);

   switch(opcion){
       case 1:
       f();
       break;
       case 2:
        v();
       break;
       case 3:
        m();
       break;
 }

 getch();
 return 0;
}
void f(){
   float a,b,c,x,x1,x2,r;

   printf("Ingrese el valor para, a:");
   scanf("%f", &a);
   printf("Ingrese el valor para, b:");
   scanf("%f", &b);
   printf("Ingrese el valor para, c:");
   scanf("%f", &c);

   r=sqrt(pow(-b,2)-4*a*c)/(2*a);

   if (r=0){
       x=-b/(2*a);
       printf("El resultado es: %f", x);
   }else if (r>0){
       x1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
       x2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
       printf("\n\nX1: %f", x1);
       printf("\n\nX1: %f", x2);

   }else{
       printf("\n\nLa raiz es compleja, no se puede resolver.");
       }
   }

   void v(){
   float v,r,p;
   p=3.1415;

   printf("\n\nEscriba el radio en metros:");
   scanf("%f", &r);
   if(r<=0){
   printf("\n\nERROR");

}else{
   v=(1.33)*p*(r*r*r);
   printf("\n\nEl volumen de la esfera en metros es de: %f", v);
 }
}

void m(){
   float xf,xo,vo,a,t;

   printf("\nIngrese el desplazamiento inicial en metros: ");
   scanf("%f", &xo);
   printf("\nIngrese la velocidad inicial en metros sobre segundos: ");
   scanf("%f", &vo);
   printf("\nIngrese la aceleracion en este intervalo en metros sobre segundos al cuadrado: ");
   scanf("%f", &a);
   printf ("\nIngrese el tiempo de desplazamiento en segundos: ");
   scanf("%f", &t);

   xf=(xo+vo*t)+((a*pow(t,2))/2);

    printf("\n\nDesplazamiento Final XF en metros es de: %f", xf);
}
