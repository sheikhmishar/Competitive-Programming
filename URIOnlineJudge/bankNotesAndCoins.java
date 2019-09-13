import java.io.IOException;
import java.util.Scanner;

public class bankNotesAndCoins {
 
    public static void main(String[] args) throws IOException {
 
      Scanner input = new Scanner(System.in);
      double N = input.nextDouble();
      double remaining;
      
      System.out.println("NOTAS:");
      System.out.println((int)(N/100) +" nota(s) de R$ 100.00");
      remaining = N%100;
      System.out.println((int)(remaining/50) +" nota(s) de R$ 50.00");
      remaining = remaining%50;
      System.out.println((int)(remaining/20) +" nota(s) de R$ 20.00");
      remaining = remaining%20;
      System.out.println((int)(remaining/10) +" nota(s) de R$ 10.00");
      remaining = remaining%10;
      System.out.println((int)(remaining/5) +" nota(s) de R$ 5.00");
      remaining = remaining%5;
      System.out.println((int)(remaining/2) +" nota(s) de R$ 2.00");
      remaining = remaining%2;
      System.out.println("MOEDAS:");
      System.out.println((int)(remaining/1.00) + " moeda(s) de R$ 1.00");
      remaining = remaining%1.00;
      System.out.println((int)(remaining/0.50) + " moeda(s) de R$ 0.50");
      remaining = remaining%0.50;
      System.out.println((int)(remaining/0.25) + " moeda(s) de R$ 0.25");
      remaining = remaining%0.25;
      System.out.println((int)(remaining/0.10) + " moeda(s) de R$ 0.10");
      remaining = remaining%0.10;
      System.out.println((int)(remaining/0.05) + " moeda(s) de R$ 0.05");
      remaining = remaining%0.05;
      System.out.println((int)(0.001+(remaining/0.01)) + " moeda(s) de R$ 0.01");
      
    } 
}