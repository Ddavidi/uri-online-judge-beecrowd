/* 
   ==UserScript==
 @name         Seis Números Ímpares
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1070 - Seis Números Ímpares
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>

int main()
{
    int i=0, X;
    
    scanf("%d", &X);
    
    for(i;i<=10;i++){
        X++;
        if(X%2!=0){
            printf("%d\n", X);
        }    
    }

    return 0;
}
