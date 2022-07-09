/* 
   ==UserScript==
 @name         Média 1
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1005 - Média 1
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    double A, B, media;
    
    cin >> A >> B;
    
    media = (A*3.5 + B * 7.5) / 11;
    
    cout << fixed << setprecision(5);
    cout << "MEDIA = " << media << endl;
    
    return 0;
}
