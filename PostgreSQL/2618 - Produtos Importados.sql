/* 
   ==UserScript==
 @name         Produtos Importados
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 2618 - Produtos Importados
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

SELECT products.name, providers.name, categories.name
FROM products
INNER JOIN providers ON products.id_providers = providers.id
INNER JOIN categories ON products.id_categories = categories.id
WHERE categories.name = 'Imported' AND providers.name = 'Sansul SA'
