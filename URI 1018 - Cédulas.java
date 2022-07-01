// David "Dede" Ribeiro - 2022 - @ddavidi_

import java.util.Scanner;
import java.io.IOException;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        System.out.println(N);
        
        int cedula = N/100;
        N -= cedula * 100;
        System.out.println(cedula + " nota(s) de R$ 100,00");
        
        cedula = N/50;
        N -= cedula * 50;
        System.out.println(cedula + " nota(s) de R$ 50,00");
        
        cedula = N/20;
        N -= cedula * 20;
        System.out.println(cedula + " nota(s) de R$ 20,00");
        
        cedula = N/10;
        N -= cedula * 10;
        System.out.println(cedula + " nota(s) de R$ 10,00");
        
        cedula = N/5;
        N -= cedula * 5;
        System.out.println(cedula + " nota(s) de R$ 5,00");
        
        cedula = N/2;
        N -= cedula * 2;
        System.out.println(cedula + " nota(s) de R$ 2,00");
        
        cedula = N % 2;
        System.out.println(cedula + " nota(s) de R$ 1,00");
        
    }
 
}
