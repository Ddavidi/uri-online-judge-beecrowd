/* 
   ==UserScript==
 @name         Taxas
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 2745 - Taxas
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

SELECT name, round(salary*0.10, 2) AS tax
FROM people
WHERE salary>3000
