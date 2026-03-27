/* 
   ==UserScript==
 @name         Desenhando Labirintos
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1076 - Desenhando Labirintos
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>
#include <string.h>

int main() {
    int T;
    
    if (scanf("%d", &T) != 1) return 0; 

    while (T--) {
        int N, V, A;
        
        scanf("%d", &N); 
        scanf("%d %d", &V, &A); 

        int adj[50][50];
        memset(adj, 0, sizeof(adj));

        int u, v;
        int movimentos = 0;

        for (int i = 0; i < A; i++) {
            scanf("%d %d", &u, &v); 

            if (!adj[u][v]) {
                adj[u][v] = 1;
                adj[v][u] = 1;
                movimentos += 2;
            }
        }

        printf("%d\n", movimentos);
    }

    return 0;
}