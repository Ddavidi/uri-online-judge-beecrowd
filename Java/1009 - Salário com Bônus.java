/* 
   ==UserScript==
 @name         Salário com Bônus
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1009 - Salário com Bônus
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

import java.util.Scanner;
import java.io.IOException;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner scan = new Scanner(System.in);
        String nomeFuncionario = scan.next();
        double salarioFixo = scan.nextDouble();
        double vendasPorMes = scan.nextDouble();
        
        double total = salarioFixo + (vendasPorMes * 0.15);
        
		System.out.println(String.format("TOTAL = R$ %.2f", total));
 
    }
 
}
