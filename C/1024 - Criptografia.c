/* 
   ==UserScript==
 @name         Criptografia
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1024 - Criptografia
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int CasosTestes, i, j, Tamanho;
    char Mensagens[10000];

    scanf("%d", &CasosTestes);

    for(i = 0; i < CasosTestes; i++){
        scanf(" %[^\n]s", Mensagens);
        Tamanho = strlen( Mensagens );

        for(j = 0; j < Tamanho; j++){
            if(Mensagens[j] >= 'a' && Mensagens[j] <= 'z'){
                Mensagens[j] = Mensagens[j]+3;
            }
            else if(Mensagens[j] >= 'A' && Mensagens[j] <= 'Z'){
                Mensagens[j] = Mensagens[j]+3;
            }
        }

        for(j = 0; j < (Tamanho+1)/2; j++){
            Mensagens[j] = Mensagens[j]-1;
        }

        for(j = Tamanho-1; j >= 0; j--){
            printf("%c", Mensagens[j]);
        }
        printf("\n");
    }

    return 0;
}
