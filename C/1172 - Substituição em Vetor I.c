/* 
   ==UserScript==
 @name         Substituição em Vetor I
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1172 - Substituição em Vetor I
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>

int main() {

    int X[10], Contador;

    for(Contador=0; Contador<10; Contador++){
        scanf("%d", &X[Contador]);
            if(X[Contador]<=0){
                X[Contador] = 1;
            }
             printf("X[%d] = %d\n",Contador, X[Contador]);
    }

    return 0;
}
