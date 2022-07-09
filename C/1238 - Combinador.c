/* 
   ==UserScript==
 @name         Combinador
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1238 - Combinador
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>

int main()
{
    int CasosTestes, i, j, tamanhoc1, tamanhoc2, MaiorTamanho;
    char c1[51], c2[52];

    scanf("%d", &CasosTestes);

    for(i = 0; i < CasosTestes; i++){
        scanf("%s %s", &c1, &c2);
        tamanhoc1 = strlen ( c1 );
        tamanhoc2 = strlen ( c2 );

        if(tamanhoc1 > tamanhoc2)
            MaiorTamanho = tamanhoc1;
        else
            MaiorTamanho = tamanhoc2;

        for(j = 0; j < MaiorTamanho; j++){
            if(j < tamanhoc1)
                printf("%c", c1[j]);
            if(j < tamanhoc2)
                printf("%c", c2[j]);
        }
        printf("\n");
    }
    return 0;
}
