/* 
   ==UserScript==
 @name         Consumo
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1014 - Consumo
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    
    double distancia_total, combustivel_gasto;
    
    cin >> distancia_total >> combustivel_gasto;
    
    cout << fixed << setprecision(3);
    cout << distancia_total/combustivel_gasto << " km/l" << endl;
    
    return 0;
    
}
