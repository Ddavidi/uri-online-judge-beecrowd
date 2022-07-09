/* 
   ==UserScript==
 @name         Pedidos no Primeiro Semestre
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 2620 - Pedidos no Primeiro Semestre
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

SELECT customers.name, orders.id
FROM customers
INNER JOIN orders ON customers.id = orders.id_customers
WHERE orders.orders_date BETWEEN '2016-01-01' AND '2016-06-30'
