/* 
   ==UserScript==
 @name         Troca em Vetor I
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1175 - Troca em Vetor I
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>

int main() {

    int Valor, N[20], Contador;

    for(Contador=19; Contador>=0; Contador--){
        scanf("%d", &Valor);
        N[Contador]=Valor;
    }
    for(Contador=0; Contador<20; Contador++){
        printf("N[%d] = %d\n", Contador, N[Contador]);
    }

    return 0;
}
