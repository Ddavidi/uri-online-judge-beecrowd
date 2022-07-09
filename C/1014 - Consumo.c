/* 
   ==UserScript==
 @name         Consumo
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1014 - Consumo
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>

int main()
{
   int X;
   double Y, Consumo_Medio;
   
   scanf("%d%lf", &X, &Y);
   
   Consumo_Medio = X/Y;
   
   printf("%.3lf km/l\n", Consumo_Medio);
   
    return 0;
}
