/* 
   ==UserScript==
 @name         Teste de Seleção 1
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1035 - Teste de Seleção 1
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>

int main()
{
    int A, B, C, D;
    
    scanf("%d%d%d%d", &A, &B, &C, &D);
    
    if(B>C && D>A && C+D>A+B && B>0 && C>0 && A%2==0) {
        printf("Valores aceitos\n");
    }
    else {
        printf("Valores nao aceitos\n");
    }
    
    return 0;
}
