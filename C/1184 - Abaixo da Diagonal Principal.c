/* 
   ==UserScript==
 @name         Abaixo da Diagonal Principal
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1184 - Abaixo da Diagonal Principal
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>

int main(){
	int i, y;
	char operacao[2];
	double soma=0.0, M[12][12];

	scanf("%s", operacao);

	for(i=0; i<12; i++){
		for(y=0; y<12; y++){
			scanf("%lf", &M[i][y]);

		if(y<i){
			soma += M[i][y];
			}
		}
	}

	if(operacao[0]=='S'){
		printf("%.1lf\n", soma);
	}
	else{
		soma = soma/66.0;
		printf("%.1lf\n", soma);	
	}

	return 0;	
}
