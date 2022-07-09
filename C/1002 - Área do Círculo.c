/* 
   ==UserScript==
 @name         Área do Círculo
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1002 - Área do Círculo
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>
main()
{
    double raio, pi, area;
    pi = 3.14159;

    scanf("%lf", &raio);
    area = pi*raio*raio;
    printf("A=%.4f\n", area);
}
