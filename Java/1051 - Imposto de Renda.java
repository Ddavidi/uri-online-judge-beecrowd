/* 
   ==UserScript==
 @name         Imposto de Renda
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1051 - Imposto de Renda
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

import java.util.Scanner;
import java.io.IOException;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        // Scanner
        Scanner scan = new Scanner(System.in);
        
        double salario = scan.nextDouble();
        double imposto = 0;
        
        if(salario<=2000){
            System.out.println("Isento");
            return;
        }
        if(salario>2000 && salario<=3000){
            double salario8 = salario - 2000;
            imposto = salario8 * 0.08;
        }
        if(salario>3000 && salario<=4500){
            double salario18 = salario - 3000;
            double taxa8 = 0.08 * 1000;
            imposto = salario18 * 0.18 + taxa8;
        }
        if(salario>4500){
            double salario28 = salario - 4500;
            double taxa8 = 0.08 * 1000;
            double taxa18 = 0.18 * 1500;
            imposto = salario28 * 0.28 + taxa18 + taxa8;
        }
        
        System.out.println(String.format("R$ %.2f", imposto));
    }
}
