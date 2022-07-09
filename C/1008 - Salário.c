/* 
   ==UserScript==
 @name         Salário
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1008 - Salário
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>

int main()
{
    int NUMBER, HORAS_TRABALHADAS;
    double SALARIO_POR_HORAS_TRABALHADAS, SALARY;
    
    scanf("%d%d%lf", &NUMBER, &HORAS_TRABALHADAS, &SALARIO_POR_HORAS_TRABALHADAS);
    SALARY = HORAS_TRABALHADAS * SALARIO_POR_HORAS_TRABALHADAS;
    printf("NUMBER = %d\n", NUMBER);
    printf("SALARY = U$ %.2lf\n", SALARY);
}
