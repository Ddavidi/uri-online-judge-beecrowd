/* 
   ==UserScript==
 @name         Fibonacci em Vetor
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1176 - Fibonacci em Vetor
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>

// DAVID NUNES RIBEIRO - INF 1A

int main() {

    int Testes, N, Contador;
    unsigned long long int Fib[61];

    Fib[0]=0;
    Fib[1]=1;

    for(Contador=2; Contador<61; Contador++){
        Fib[Contador] = Fib[Contador-1] + Fib[Contador-2];
    }

    scanf("%d", &Testes);

    for(Contador = 0; Contador<Testes; Contador++){
        scanf("%d", &N);
        printf("Fib(%d) = %llu\n", N, Fib[N]);
    }

    return 0;
}
