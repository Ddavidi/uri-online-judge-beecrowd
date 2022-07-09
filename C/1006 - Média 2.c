/* 
   ==UserScript==
 @name         Média 2
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1006 - Média 2
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>
main()
{
    double A, B, C, MEDIA;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    MEDIA = (A*2+B*3+C*5)/10;
    printf("MEDIA = %.1lf\n", MEDIA);
}
