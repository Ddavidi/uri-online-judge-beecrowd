/* 
   ==UserScript==
 @name         Troco
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 2446 - Troco
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>

#define TAM 100001

int somas_possiveis[TAM];

int main()
{
    int v_desejado, m, moeda,i,v;

    scanf("%d %d", &v_desejado, &m);

    somas_possiveis[0] = 1;

    for (i = 1; i <= v_desejado; i++) somas_possiveis[i] = 0;

    for (i = 0; i < m; i++)
    {
        scanf("%d", &moeda);

        for (v = v_desejado; v >= moeda; v--)
        {
            if (somas_possiveis[v-moeda]) somas_possiveis[v] = 1;
        }
    }

    if (somas_possiveis[v_desejado] == 1) printf("S\n");
    else printf("N\n");

    return 0;
}
