/* 
   ==UserScript==
 @name         Conversão de Tempo
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1019 - Conversão de Tempo
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>

int
main ()
{
  int segundos, minutos, horas;

  scanf ("%d", &segundos);

  horas = (segundos/60)/60;
  minutos = (segundos/60)%60;
  segundos = segundos - (segundos/60)*60;
  
  printf ("%d:%d:%d\n", horas, minutos, segundos);

  return 0;
}
