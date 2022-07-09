/* 
   ==UserScript==
 @name         Fornecedor Ajax SA
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 2617 - Fornecedor Ajax SA
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

SELECT products.name, providers.name
FROM providers
INNER JOIN products
ON providers.id = products.id_providers
WHERE providers.name = 'Ajax SA'
