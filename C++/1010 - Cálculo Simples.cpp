/* 
   ==UserScript==
 @name         Cálculo Simples
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1010 - Cálculo Simples
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int cod_pec;
    float num_pec, val_pec, total;
    
    for(int i=0; i < 2; i++){
        cin >> cod_pec >> num_pec >> val_pec;
        total += num_pec * val_pec;
    }
    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << total << endl;
    
    return 0;
}
