/* 
   ==UserScript==
 @name         Super Luxo
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 2619 - Super Luxo
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

SELECT products.name, providers.name, products.price
FROM products
INNER JOIN providers ON products.id_providers = providers.id
INNER JOIN categories ON products.id_categories = categories.id
WHERE products.price > 1000 AND categories.name = 'Super Luxury'
