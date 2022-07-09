/* 
   ==UserScript==
 @name         Linha na Matriz
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1181 - Linha na Matriz
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>

int main(){
     double M[12][12], Media=0, Soma=0;
     int L, contador, contador2;
     char T[2];

     scanf("%d", &L);
     scanf("%s", &T);
     
     for(contador=0; contador<12; contador++){
        for(contador2=0; contador2<12; contador2++){
            scanf("%lf", &M[contador][contador2]);
        }
     }


    for(contador=0; contador<12; contador++){
            Soma+=M[L][contador];
    }

    Media=Soma/12;

    if(T[0]=='S'){
        printf("%.1lf\n", Soma);
    }

    else{
        printf("%.1lf\n", Media);
    }
}
