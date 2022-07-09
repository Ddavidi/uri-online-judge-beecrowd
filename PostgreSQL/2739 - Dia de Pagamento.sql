/* 
   ==UserScript==
 @name         Dia de Pagamento
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 2739 - Dia de Pagamento
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

SELECT name, cast(EXTRACT(DAY FROM payday) AS INT) AS day
FROM loan
