/* 
   ==UserScript==
 @name         Representantes Executivos
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 2605 - Representantes Executivos
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

SELECT products.name, providers.name
FROM products, providers
WHERE products.id_categories = 6 and products.id_providers = providers.id
