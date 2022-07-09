/* 
   ==UserScript==
 @name         Média 1
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1005 - Média 1
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>
main()
{
    double A, B, MEDIA;
    scanf("%lf", &A);
    scanf("%lf", &B);
    MEDIA = (A*3.5 + B*7.5) / 11;
    printf("MEDIA = %.5lf\n", MEDIA);
}
