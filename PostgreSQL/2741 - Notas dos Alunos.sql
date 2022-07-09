/* 
   ==UserScript==
 @name         Notas dos Alunos
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 2741 - Notas dos Alunos
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

SELECT CONCAT('Approved: ', name) AS name, grade
FROM students
WHERE grade>=7
ORDER BY grade DESC
