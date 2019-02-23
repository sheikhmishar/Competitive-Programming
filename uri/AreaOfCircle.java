import java.io.IOException;
import java.util.Scanner;

public class AreaOfCircle {
  
  public static void main(String[] args) throws IOException {
    
    Scanner input = new Scanner(System.in);
    double R = input.nextDouble();
    double Pi = 3.14159;
    double A = Pi * R * R;
    System.out.printf("A=%.4f\n", A);
    
  }
  
}