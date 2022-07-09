/* 
   ==UserScript==
 @name         Área do Círculo
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1002 - Área do Círculo
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    
    double area;
    double n = 3.14159;
    double raio;
    
    cin >> raio;
    
    area = n * raio*raio;
    
    cout << fixed << setprecision (4);
    cout << "A=" << area << endl;
    
    return 0;
}
