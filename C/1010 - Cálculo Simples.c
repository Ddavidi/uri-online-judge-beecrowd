/* 
   ==UserScript==
 @name         Cálculo Simples
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1010 - Cálculo Simples
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>
main()
{
    int Codigo1, Quantidade1, Codigo2, Quantidade2;
    double Valor_Unitario1, Valor_Unitario2, TOTAL;
    scanf("%d%d%lf", &Codigo1, &Quantidade1, &Valor_Unitario1);
    scanf("%d%d%lf", &Codigo2, &Quantidade2, &Valor_Unitario2);
    TOTAL = (Valor_Unitario1 * Quantidade1) + (Valor_Unitario2 * Quantidade2);
    printf("VALOR A PAGAR: R$ %.2lf\n", TOTAL);
    
    return 0;
}
