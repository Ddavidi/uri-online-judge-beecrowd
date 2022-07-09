/* 
   ==UserScript==
 @name         Menores que 10 ou Maiores que 100
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 2604 - Menores que 10 ou Maiores que 100
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

SELECT id,name FROM products
WHERE price<10 or price>100
