/* 
   ==UserScript==
 @name         Liga
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 2740 - Liga
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

(SELECT CONCAT('Podium: ', team) AS name
FROM league
ORDER BY position
LIMIT 3)
UNION ALL
(SELECT CONCAT('Demoted: ', team)
FROM league
WHERE position > (SELECT COUNT(position) - 2
FROM league))
