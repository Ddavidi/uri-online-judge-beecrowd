/* 
   ==UserScript==
 @name         Máscara de CPF
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 2625 - Máscara de CPF
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

SELECT substring(cpf, 1, 3 ) || '.' || substring(cpf, 4, 3 ) || '.' || substring(cpf, 7, 3) || '-' || substring(cpf, 10, 2)
FROM natural_person
