/* 
   ==UserScript==
 @name         Números Pares
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1059 - Números Pares
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>

int main()
{
    int x;
    x=2;
    
    while(x<=100){
        printf("%d\n", x);
        x=x+2;
    }

    return 0;
}
