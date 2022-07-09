/* 
   ==UserScript==
 @name         Diferença
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1007 - Diferença
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int A, B, C, D, diferenca;
    
    cin >> A >> B >> C >> D; 
    
    diferenca = (A*B - C*D);
    
    cout << "DIFERENCA = " << diferenca << endl;
    
    return 0;
}
