/* 
   ==UserScript==
 @name         Quantidades de Cidades por Clientes
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 2624 - Quantidades de Cidades por Clientes
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

SELECT COUNT (DISTINCT city)
FROM customers
