/* 
   ==UserScript==
 @name         Positivos e Média
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI  1064 - Positivos e Média
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>

int main()
{
    int contador=0, Numeros_Positivos=0;
    double Valor, Media;
    
    for(contador;contador<6;contador++){
        scanf("%lf", &Valor);
        
        if(Valor>0){
            Numeros_Positivos++;
            Media += Valor;
        }
    }
    
    Media = Media/Numeros_Positivos;
    printf("%d valores positivos\n", Numeros_Positivos);
    printf("%.1lf\n", Media);

    return 0;
}
