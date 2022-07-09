/* 
   ==UserScript==
 @name         Salário
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1008 - Salário
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int num_func, num_hor;
    double sal_hor, salary;
    
    cin >> num_func >> num_hor >> sal_hor;
    
    cout << fixed << setprecision(2);
    cout << "NUMBER = " << num_func << "\nSALARY = U$ " << sal_hor*num_hor << endl; 
    
    return 0;
}
