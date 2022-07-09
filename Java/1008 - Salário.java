/* 
   ==UserScript==
 @name         Salário
 @namespace    https://github.com/Ddavidi/uri-online-judge-beecrowd
 @description  URI 1008 - Salário
 @copyright    @ddavidi_
 @author       @ddavidi_	
   ==/UserScript==
*/

import java.util.Scanner;
import java.io.IOException;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner scan = new Scanner(System.in);
        int numeroFuncionario = scan.nextInt();
		int horasTrabalhadas = scan.nextInt();
		double valorHora = scan.nextDouble();
		
		double salario = horasTrabalhadas * valorHora;
		
		System.out.println("NUMBER = " + numeroFuncionario);
		System.out.println(String.format("SALARY = U$ %.2f", salario));
 
    }
 
}
