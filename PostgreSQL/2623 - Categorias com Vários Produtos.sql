/* 
   ==UserScript==
 @name         Categorias com Vários Produtos
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 2623 - Categorias com Vários Produtos
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

SELECT products.name, categories.name
FROM products
INNER JOIN categories ON products.id_categories = categories.id
WHERE products.amount > 100 AND products.id_categories IN (1,2,3,6,9)
