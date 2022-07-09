/* 
   ==UserScript==
 @name         O Maior
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1013 - O Maior
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

int main()
{
   int a, b, c, Maior;
   scanf("%d%d %d", &a, &b, &c);
   
   Maior = (a+b+abs(a-b))/2;
   Maior = (Maior+c+abs(Maior-c))/2;
   
   printf("%d eh o maior\n", Maior);
   
    return 0;
}
