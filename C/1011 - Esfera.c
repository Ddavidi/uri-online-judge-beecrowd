/* 
   ==UserScript==
 @name         Esfera
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1011 - Esfera
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>

int main()
{
    double Pi, Volume, Raio;
    Pi = 3.14159;
    scanf("%lf", &Raio);
    Volume = (4/3.0)*Pi*pow(Raio,3);
    printf("VOLUME = %.3lf\n", Volume);
    
    return 0;
}
