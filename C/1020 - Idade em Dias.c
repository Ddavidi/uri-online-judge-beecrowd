/* 
   ==UserScript==
 @name         Idade em Dias
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1020 - Idade em Dias
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>

int main ()
{
  int Dias, Meses, Anos;
  
  scanf("%d", &Dias);
  
  Anos = Dias / 365;
  Meses = (Dias%365)/30;
  Dias = (Dias%365)%30;
  
  printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", Anos, Meses, Dias);

  return 0;
}
