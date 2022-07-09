/* 
   ==UserScript==
 @name         Endereço dos Clientes
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 2603 - Endereço dos Clientes
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

SELECT name,street FROM customers
WHERE city='Porto Alegre'
