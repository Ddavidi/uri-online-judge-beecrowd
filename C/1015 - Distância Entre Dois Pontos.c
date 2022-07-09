/* 
   ==UserScript==
 @name         Distância Entre Dois Pontos
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1015 - Distância Entre Dois Pontos
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>
#include <math.h>

int main()
{
      double x1, x2, y1, y2, DISTANCIA;
      
      scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
      
      DISTANCIA = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
      
      printf("%.4lf\n", DISTANCIA);
      
      return 0;
}
