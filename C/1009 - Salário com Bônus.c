/* 
   ==UserScript==
 @name         Salário com Bônus
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1009 - Salário com Bônus
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>

main()
{
    char Name;
    double Salario_Fixo, Vendas_Efetuadas, TOTAL;

    scanf("%s%lf%lf", &Name, &Salario_Fixo, &Vendas_Efetuadas);
    TOTAL = Salario_Fixo + (Vendas_Efetuadas * 15/100);
    printf("TOTAL = R$ %.2lf\n", TOTAL);

    return 0;
}
