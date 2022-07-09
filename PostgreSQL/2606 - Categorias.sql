/* 
   ==UserScript==
 @name         Categorias
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 2606 - Categorias
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

SELECT products.id, products.name
FROM products
INNER JOIN categories
ON products.id_categories = categories.id
WHERE categories.name LIKE 'super%'
