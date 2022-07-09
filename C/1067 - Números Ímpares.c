/* 
   ==UserScript==
 @name         Números Ímpares
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1067 - Números Ímpares
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>

int main()
{
    int Valor=1, Contador=0, X;
    
    scanf("%d", &X);
    
    for(Contador;Contador<X;Contador+=2){
        printf("%d\n", Valor);
        Valor += 2; 
        
    }

    return 0;
}
