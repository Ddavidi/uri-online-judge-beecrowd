/* 
   ==UserScript==
 @name         Distância Entre Dois Pontos
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1015 - Distância Entre Dois Pontos
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main() {
    
    double x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;
    
    cout << fixed << setprecision(4);
    cout << sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)) << endl; 
    
    return 0;
    
}
