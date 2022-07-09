/* 
   ==UserScript==
 @name         Concurso
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 2738 - Concurso
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

SELECT candidate.name, cast((((score.math * 2) + (score.specific * 3) + (score.project_plan * 5)) / 10) AS NUMERIC(15, 2)) AS media
FROM candidate INNER JOIN score ON candidate.id = score.candidate_id
ORDER BY media DESC
