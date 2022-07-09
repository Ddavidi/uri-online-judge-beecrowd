/* 
   ==UserScript==
 @name         Filmes de Ação
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 2611 - Filmes de Ação
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

SELECT movies.id, movies.name
FROM movies
INNER JOIN genres
ON movies.id_genres = genres.id
WHERE genres.description = 'Action'
