/* 
   ==UserScript==
 @name         Senhas
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 2744 - Senhas
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

SELECT id, password, MD5(password) AS MD5
FROM account
