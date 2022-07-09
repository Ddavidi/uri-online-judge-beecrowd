/* 
   ==UserScript==
 @name         Cédulas
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1018 - Cédulas
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>

int main()
{
    int Valor, Cedula;
  
    scanf("%d", &Valor);

    printf("%d\n", Valor);
    
    Cedula = Valor/100;
    Valor = Valor - (Cedula*100);
    printf("%d nota(s) de R$ 100,00\n", Cedula);
    
    Cedula = Valor/50;
    Valor = Valor - (Cedula*50);
    printf("%d nota(s) de R$ 50,00\n", Cedula);
    
    Cedula = Valor/20;
    Valor = Valor - (Cedula*20);
    printf("%d nota(s) de R$ 20,00\n", Cedula);
    
    Cedula = Valor/10;
    Valor = Valor - (Cedula*10);
    printf("%d nota(s) de R$ 10,00\n", Cedula);
    
    Cedula = Valor/5;
    Valor = Valor - (Cedula*5);
    printf("%d nota(s) de R$ 5,00\n", Cedula);
    
    Cedula = Valor/2;
    Valor = Valor - (Cedula*2);
    printf("%d nota(s) de R$ 2,00\n", Cedula);
    
    Cedula = Valor/1;
    Valor = Valor - (Cedula*1);
    printf("%d nota(s) de R$ 1,00\n", Cedula);
  
    return 0;
}
