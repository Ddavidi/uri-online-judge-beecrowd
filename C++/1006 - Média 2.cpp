/* 
   ==UserScript==
 @name         Média 2
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1006 - Média 2
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    double A, B, C, media;
    
    cin >> A >> B >> C;
    
    media = (A * 2 + B * 3 + C * 5) / 10;
    
    cout << fixed << setprecision(1);
    cout << "MEDIA = " << media << endl;
    
    return 0;
}
