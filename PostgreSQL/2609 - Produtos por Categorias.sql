/* 
   ==UserScript==
 @name         Produtos por Categorias
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 2609 - Produtos por Categorias
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

SELECT categories.name, SUM(products.amount)
FROM products
INNER JOIN categories
ON products.id_categories = categories.id
GROUP BY categories.name
