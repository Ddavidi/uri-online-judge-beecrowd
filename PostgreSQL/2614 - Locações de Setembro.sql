/* 
   ==UserScript==
 @name         Locações de Setembro
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 2614 - Locações de Setembro
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

SELECT customers.name, rentals.rentals_date
FROM customers
INNER JOIN rentals
ON customers.id = rentals.id_customers
WHERE rentals.rentals_date >= '2016-09-01'
AND rentals.rentals_date <= '2016-09-30'
