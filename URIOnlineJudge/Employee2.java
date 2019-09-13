import java.io.IOException;
import java.util.Scanner;

public class Employee2 {
  
  public static void main(String[] args) throws IOException {
    
    Scanner input = new Scanner(System.in);
    String A = input.next();
    double B = input.nextDouble();
    double C = input.nextDouble();
    
    
    double X = B + C * 0.15;
    System.out.printf("TOTAL = R$ %.2f\n",X);
  }
  
}