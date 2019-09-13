import java.io.IOException;
import java.util.Scanner;

public class bankNotes {
 
    public static void main(String[] args) throws IOException {
 
      Scanner input = new Scanner(System.in);
      int N = input.nextInt();
      int remaining;
      
      System.out.println(N);
      System.out.println((N/100) +" nota(s) de R$ 100,00");
      remaining = N%100;
      System.out.println((remaining/50) +" nota(s) de R$ 50,00");
      remaining = remaining%50;
      System.out.println((remaining/20) +" nota(s) de R$ 20,00");
      remaining = remaining%20;
      System.out.println((remaining/10) +" nota(s) de R$ 10,00");
      remaining = remaining%10;
      System.out.println((remaining/5) +" nota(s) de R$ 5,00");
      remaining = remaining%5;
      System.out.println((remaining/2) +" nota(s) de R$ 2,00");
      remaining = remaining%2;
      System.out.println((remaining) +" nota(s) de R$ 1,00");
      
    } 
}