/* 
   ==UserScript==
 @name         Aumento de Salário
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1048 - Aumento de Salário
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
        
        if(salario <= 400.00){
            double novoSalario = salario * 0.15 + salario;
            double reajusteSalario = salario * 0.15;
            
            System.out.println(String.format("Novo salario: %.2f", novoSalario));
            System.out.println(String.format("Reajuste ganho: %.2f", reajusteSalario));
            System.out.println("Em percentual: 15 %");
        }
        
        else if(salario>400 && salario<=800){
            double novoSalario = salario * 0.12 + salario;
            double reajusteSalario = salario * 0.12;
            
            System.out.println(String.format("Novo salario: %.2f", novoSalario));
            System.out.println(String.format("Reajuste ganho: %.2f", reajusteSalario));
            System.out.println("Em percentual: 12 %");
        }
        
        else if(salario>800 && salario<=1200){
            double novoSalario = salario * 0.10 + salario;
            double reajusteSalario = salario * 0.10;
            
            System.out.println(String.format("Novo salario: %.2f", novoSalario));
            System.out.println(String.format("Reajuste ganho: %.2f", reajusteSalario));
            System.out.println("Em percentual: 10 %");
        }
        
        else if(salario>1200 && salario<=2000){
            double novoSalario = salario * 0.07 + salario;
            double reajusteSalario = salario * 0.07;
            
            System.out.println(String.format("Novo salario: %.2f", novoSalario));
            System.out.println(String.format("Reajuste ganho: %.2f", reajusteSalario));
            System.out.println("Em percentual: 7 %");
        }
        
        else{
            double novoSalario = salario * 0.04 + salario;
            double reajusteSalario = salario * 0.04;
            
            System.out.println(String.format("Novo salario: %.2f", novoSalario));
            System.out.println(String.format("Reajuste ganho: %.2f", reajusteSalario));
            System.out.println("Em percentual: 4 %");
        }
    }
}
