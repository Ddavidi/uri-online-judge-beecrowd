/* 
   ==UserScript==
 @name         Nenhuma Locação
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 2616 - Nenhuma Locação
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

SELECT id,name
FROM customers
WHERE id NOT IN (SELECT id_customers FROM locations)
