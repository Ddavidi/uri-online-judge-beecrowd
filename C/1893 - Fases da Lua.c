/* 
   ==UserScript==
 @name         Fases da Lua
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1893 - Fases da Lua
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>

int main()
{
    int valor1, valor2;
    
    scanf("%d%d", &valor1, &valor2);
    
    if(valor1 <= valor2){
        if(valor2 >= 0 && valor2 <= 2){
        printf("nova\n");
        }
        
        else if(valor2 >= 2 && valor2 <= 96){
        printf("crescente\n");
        }
        
        else if (valor2 >= 97 && valor2 <=100){
            printf("cheia\n");
        }
    }
    
    else {
        if(valor2 >= 3 && valor2 <=96){
            printf("minguante\n");
        }
        
        else if(valor2 >= 0 && valor2 <= 2){
        printf("nova\n");
        }
        
        else if (valor2 >= 97 && valor2 <=100){
            printf("cheia\n");
        }
    }

    return 0;
}
