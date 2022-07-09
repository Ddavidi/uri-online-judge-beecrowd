/* 
   ==UserScript==
 @name         Quantidades Entre 10 e 20
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 2621 - Quantidades Entre 10 e 20
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

SELECT products.name
FROM products
INNER JOIN providers ON products.id_providers = providers.id
WHERE products.amount BETWEEN 10 AND 20 AND providers.name LIKE 'P%' 
