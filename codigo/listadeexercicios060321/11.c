#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main(){
   float x1, x2, y1, y2, r1, r2, s, d;
  
   printf("Digite o primeiro ponto x: ");
   scanf("%f", &x1);
 
   printf("Digite o segundo ponto x: ");
   scanf("%f", &x2);
 
   printf("Digite o primeiro ponto y: ");
   scanf("%f", &y1);
 
   printf("Digite o segundo ponto y: ");
   scanf("%f", &y2);
       
   r1= (x2-y1) * (x2-y1);
   r2= (y2 - x1) * (y2 - x1);
   s = r1 + r2;
   d = sqrt(s);
   printf("A distancia e: %.2f\n", d);
 
   return 0;
  
}