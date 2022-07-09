/* 
   ==UserScript==
 @name         Mês
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1052 - Mês
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>

int main(){

    char Mes[12][15]={"January\0","February\0","March\0","April\0","May\0","June\0","July\0","August\0","September\0","October\0","November\0","December\0"};
    int Numero_Mes;
    scanf("%d", &Numero_Mes);
    puts(Mes[Numero_Mes-1]);
    return 0;
}
