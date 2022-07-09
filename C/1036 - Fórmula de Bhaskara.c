/* 
   ==UserScript==
 @name         Fórmula de Bhaskara
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1036 - Fórmula de Bhaskara
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double A, B, C, R1, R2, Delta;
    
    scanf("%lf%lf%lf", &A, &B, &C);
    
    Delta = pow(B,2)-4*A*C;
    
    if(Delta<0){
        printf("Impossivel calcular\n");
    }
    else if(A == 0){
        printf("Impossivel calcular\n");
    }
    else{
    R1 = (-(B) + sqrt(Delta))/(2*A);
    R2 = (-(B) - sqrt(Delta))/(2*A);
    
    printf("R1 = %.5lf\n", R1);
    printf("R2 = %.5lf\n", R2);
    }

    return 0;
}

