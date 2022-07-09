/* 
   ==UserScript==
 @name         Lanche
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1038 - Lanche
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>
#include <math.h>

// DAVID NUNES RIBEIRO - INF 1A

int main()
{
    int Codigo, Quantidade;
    double Total;
    
    scanf("%d%d", &Codigo, &Quantidade);
    
    if(Codigo == 1){
        Total = 4.00 * Quantidade;
    }
    else if(Codigo == 2){
        Total = 4.50 * Quantidade;
    }
    else if(Codigo == 3){
        Total = 5.00 * Quantidade;
    }
    else if(Codigo == 4){
        Total = 2.00 * Quantidade;
    }
    else if(Codigo == 5){
        Total = 1.50 * Quantidade;
    }
    
    printf("Total: R$ %.2lf\n", Total);

    return 0;
}
