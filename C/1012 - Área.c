/* 
   ==UserScript==
 @name         Área
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1012 - Área
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>

int main()
{
    double A, B, C, TRIANGULO, CIRCULO, pi, TRAPEZIO, QUADRADO, RETANGULO;
    pi = 3.14159;
    scanf("%lf%lf%lf", &A, &B, &C);
    
    TRIANGULO = A*C/2;
    CIRCULO = pi * pow(C,2);
    TRAPEZIO = (A+B)*C/2;
    QUADRADO = B*B;
    RETANGULO = A*B;
    
    printf("TRIANGULO: %.3lf\n", TRIANGULO);
    printf("CIRCULO: %.3lf\n", CIRCULO);
    printf("TRAPEZIO: %.3lf\n", TRAPEZIO);
    printf("QUADRADO: %.3lf\n", QUADRADO);
    printf("RETANGULO: %.3lf\n", RETANGULO);
    
    return 0;
}
