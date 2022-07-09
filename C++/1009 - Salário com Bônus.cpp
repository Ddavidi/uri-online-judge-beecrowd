/* 
   ==UserScript==
 @name         Salário com Bônus
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1009 - Salário com Bônus
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    string nome_vendedor;
    double salario_fixo, total_vendas, salario_final;
    
    cin >> nome_vendedor >> salario_fixo >> total_vendas;
    
    salario_final = salario_fixo + (total_vendas * 0.15);
    
    cout << fixed << setprecision(2);
    
    cout << "TOTAL = R$ " << salario_final << endl; 
    
    return 0;
}
