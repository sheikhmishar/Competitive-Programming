import java.io.IOException;
import java.util.Scanner;
 
public class Employee {
 
    public static void main(String[] args) throws IOException {
 
        Scanner input = new Scanner(System.in);
        int A = input.nextInt();
        double B = input.nextDouble();
        double C = input.nextDouble();
        double X = (B*C);
        System.out.println("NUMBER = "+ A);
        System.out.printf("SALARY = U$ %.2f\n", X);
   }
 
}