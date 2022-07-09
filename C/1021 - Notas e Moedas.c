/* 
   ==UserScript==
 @name         Notas e Moedas
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1021 - Notas e Moedas
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <stdio.h>

int main()
{
    int Real, Centavos, Nota, Moeda;

    scanf("%d.%d", &Real, &Centavos);

    printf("NOTAS:\n");
    Nota = Real / 100;
    Real = Real - (Nota*100);
    printf("%d nota(s) de R$ 100.00\n", Nota);

    Nota = Real / 50;
    Real = Real - (Nota*50);
    printf("%d nota(s) de R$ 50.00\n", Nota);

    Nota = Real / 20;
    Real = Real - (Nota*20);
    printf("%d nota(s) de R$ 20.00\n", Nota);

    Nota = Real / 10;
    Real = Real - (Nota*10);
    printf("%d nota(s) de R$ 10.00\n", Nota);

    Nota = Real / 5;
    Real = Real - (Nota*5);
    printf("%d nota(s) de R$ 5.00\n", Nota);

    Nota = Real / 2;
    Real = Real - (Nota*2);
    printf("%d nota(s) de R$ 2.00\n", Nota);



    printf("MOEDAS:\n");
    Moeda = Real /  1;
    Real = Real - (Moeda*1);
    printf("%d moeda(s) de R$ 1.00\n", Moeda);

    Moeda = Centavos /  50;
    Centavos = Centavos - (Moeda*50);
    printf("%d moeda(s) de R$ 0.50\n", Moeda);

    Moeda = Centavos /  25;
    Centavos = Centavos - (Moeda*25);
    printf("%d moeda(s) de R$ 0.25\n", Moeda);

    Moeda = Centavos /  10;
    Centavos = Centavos - (Moeda*10);
    printf("%d moeda(s) de R$ 0.10\n", Moeda);

    Moeda = Centavos /  5;
    Centavos = Centavos - (Moeda*5);
    printf("%d moeda(s) de R$ 0.05\n", Moeda);

    Moeda = Centavos /  1;
    Centavos = Centavos - (Moeda*1);
    printf("%d moeda(s) de R$ 0.01\n", Moeda);
}
