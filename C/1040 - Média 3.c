/* 
   ==UserScript==
 @name         Média 3
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1040 - Média 3
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double N1, N2, N3, N4, Media, Nota_do_Exame;
    
    scanf("%lf%lf%lf%lf", &N1, &N2, &N3, &N4);
    
    Media = ((N1*2)+(N2*3)+(N3*4)+N4)/10;
    printf("Media: %.1lf\n", Media);
    
    if(Media >= 7.00){
        printf("Aluno aprovado.\n");
    }
    else if(Media<5.00){
        printf("Aluno reprovado.\n");
    }
    else{
        printf(("Aluno em exame.\n"));
        scanf("%lf", &Nota_do_Exame);
        printf("Nota do exame: %.1lf\n", Nota_do_Exame);
        Media = (Media + Nota_do_Exame)/2;
        if(Media>=5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n", Media);
        }
        else{
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n", Media);
        }
    }

    return 0;
}
