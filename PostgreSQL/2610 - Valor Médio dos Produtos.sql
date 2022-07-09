/* 
   ==UserScript==
 @name         Valor Médio dos Produtos
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 2610 - Valor Médio dos Produtos
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

SELECT round(AVG(price), 2) as price
FROM products
