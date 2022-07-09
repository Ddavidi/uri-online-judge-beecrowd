/* 
   ==UserScript==
 @name         LED
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1168 - LED
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>

int main()
{
    int N, i, j, tamanho, resultado = 0;
    char leds[100];

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%s", leds);
        tamanho = strlen ( leds );

        for(j = 0; j < tamanho; j++){
            if(leds[j] == '1')
                resultado += 2;
            else if(leds[j] == '2')
                resultado += 5;
            else if(leds[j] == '3')
                resultado += 5;
            else if(leds[j] == '4')
                resultado += 4;
            else if(leds[j] == '5')
                resultado += 5;
            else if(leds[j] == '6')
                resultado += 6;
            else if(leds[j] == '7')
                resultado += 3;
            else if(leds[j] == '8')
                resultado += 7;
            else if(leds[j] == '1')
                resultado += 2;
            else if(leds[j] == '9')
                resultado += 6;
            else if(leds[j] == '0')
                resultado += 6;
        }
        printf("%d leds\n", resultado);
        resultado = 0;
    }
    return 0;
}
