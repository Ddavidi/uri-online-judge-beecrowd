/* 
   ==UserScript==
 @name         Experiências
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1094 - Experiências
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>

int main(){

    int Numero_Casos, Quantidade=0, Contador, Coelho=0, Rato=0, Sapo=0, Total=0;
    char Cobaia[2];

    scanf("%d", &Numero_Casos);

    for(Contador=0; Contador<Numero_Casos; Contador++){
        scanf("%d", &Quantidade);
        scanf("%s", &Cobaia);

        if(Cobaia[0]=='C'){
            Coelho +=Quantidade;
        }
        else if(Cobaia[0]=='R'){
            Rato +=Quantidade;
        }
        else if(Cobaia[0]=='S'){
            Sapo +=Quantidade;
        }

    }
	Total = Coelho + Rato + Sapo;

		printf("Total: %d cobaias\n", Total);
        printf("Total de coelhos: %d\n", Coelho);
		printf("Total de ratos: %d\n", Rato);
		printf("Total de sapos: %d\n", Sapo);

	double PCoelho=Total, PRato=Total, PSapo=Total;
	PCoelho = 100/(PCoelho/Coelho);
	PRato = 100/(PRato/Rato);
	PSapo = 100/(PSapo/Sapo);
	
		printf("Percentual de coelhos: %.2lf %%\n", PCoelho);	
		printf("Percentual de ratos: %.2lf %%\n", PRato);
		printf("Percentual de sapos: %.2lf %%\n", PSapo);
   
	return 0;
}
