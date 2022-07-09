/* 
   ==UserScript==
 @name         Quantidade de Caracteres
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 2743 - Quantidade de Caracteres
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

SELECT name, CHAR_LENGTH(name) AS lenght
FROM people
ORDER BY lenght DESC
