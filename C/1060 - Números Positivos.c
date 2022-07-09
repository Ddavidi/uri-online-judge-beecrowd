/* 
   ==UserScript==
 @name         Números Positivos
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1060 - Números Positivos
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>

int main()
{
    int Contador, Numeros_Positivos=0;
    double Valor;
    
    for(Contador=0;Contador<6;Contador++){
        scanf("%lf\n", &Valor);
        
        if(Valor>0){
            Numeros_Positivos++;
        }
    }
    
    printf("%d valores positivos\n", Numeros_Positivos);
    
    return 0;
}
