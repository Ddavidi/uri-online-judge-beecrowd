/* 
   ==UserScript==
 @name         Triângulo
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1043 - Triângulo
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double A, B, C, Perimetro, Area;
    
    scanf("%lf%lf%lf", &A, &B, &C);
    
    if(A>B-C && A<B+C && B>A-C && B<A+C && C>A-B && C<A+B){
        Perimetro = A+B+C;
        printf("Perimetro = %.1lf\n", Perimetro);
    }
    else{
        Area = (A+B)*C/2;
        printf("Area = %.1lf\n", Area);
    }
    
    return 0;
}
