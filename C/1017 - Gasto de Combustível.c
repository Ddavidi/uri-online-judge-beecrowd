/* 
   ==UserScript==
 @name         Gasto de Combustível
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1017 - Gasto de Combustível
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>

int main()
{
  int Tempo_Gasto, Velocidade_Media;
  double Distancia, Litros_Necessarios;
  
  scanf("%d%d", &Tempo_Gasto, &Velocidade_Media);
  
  Distancia = Velocidade_Media * Tempo_Gasto;
  
  Litros_Necessarios = Distancia/12;
  
  printf("%.3lf\n", Litros_Necessarios);
  
    return 0;
}
