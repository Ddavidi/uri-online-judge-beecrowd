/* 
   ==UserScript==
 @name         Filmes em Promoção
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 2613 - Filmes em Promoção
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

SELECT movies.id, movies.name
FROM movies
INNER JOIN prices
ON movies.id_prices = prices.id
WHERE prices.categorie = 'Promotion'
