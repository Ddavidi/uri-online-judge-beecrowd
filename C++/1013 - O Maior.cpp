/* 
   ==UserScript==
 @name         O Maior
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1013 - O Maior
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <iostream>
 
using namespace std;
 
int main() {
    
    int a, b, c, maior;
    
    cin >> a >> b >> c;
    
    maior = (a+b+abs(a-b))/2;
    maior = (maior+c+abs(maior-c))/2;
    
    cout << maior << " eh o maior" << endl;
    
    return 0;
    
}
