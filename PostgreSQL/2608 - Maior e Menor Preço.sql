/* 
   ==UserScript==
 @name         Maior e Menor Preço
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 2608 - Maior e Menor Preço
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

SELECT MAX(price), MIN(price)
FROM products
