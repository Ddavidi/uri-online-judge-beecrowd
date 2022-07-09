/* 
   ==UserScript==
 @name         Diferença
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1007 - Diferença
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>

int main()
{
    int A, B, C, D, DIFERENCA;
    
    scanf("%d%d%d%d", &A, &B, &C, &D);
    DIFERENCA = (A*B)-(C*D);
    printf("DIFERENCA = %d\n", DIFERENCA);
    return 0;
}
