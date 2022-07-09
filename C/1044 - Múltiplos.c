/* 
   ==UserScript==
 @name         Múltiplos
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1044 - Múltiplos
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int A, B, Multiplo;
    
    scanf("%d%d", &A, &B);
    
        if(A%B==0 || B%A==0){
            printf("Sao Multiplos\n");
        }
        else{
            printf("Nao sao Multiplos\n");
        }
    
    return 0;
}
