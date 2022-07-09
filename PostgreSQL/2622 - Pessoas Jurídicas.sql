/* 
   ==UserScript==
 @name         Pessoas Jurídicas
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 2622 - Pessoas Jurídicas
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

SELECT customers.name
FROM customers
INNER JOIN legal_person ON customers.id = legal_person.id_customers
