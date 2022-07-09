/* 
   ==UserScript==
 @name         Esfera
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1011 - Esfera
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main() {
    
    double raio, volume;
    const double pi = 3.14159;
    
    cin >> raio;
    
    volume = (4/3.0) * pi * pow(raio, 3); 
    
    cout << fixed << setprecision(3);
    cout << "VOLUME = " << volume << endl;
    
    return 0;
    
}
