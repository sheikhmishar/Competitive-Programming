import java.io.IOException;
import java.util.Scanner;

public class SimpleCalculate {
  
  public static void main(String[] args) throws IOException {
    
    Scanner input = new Scanner(System.in);
    int CodeOfProduct1 = input.nextInt();
    int NumOfProduct1 = input.nextInt();
    double UnitPrProduct1 = input.nextDouble();
    int CodeOfProduct2 = input.nextInt();
    int NumOfProduct2 = input.nextInt();
    double UnitPrProduct2 = input.nextDouble();
    double due = (NumOfProduct1 * UnitPrProduct1 + NumOfProduct2 * UnitPrProduct2);
    System.out.printf("VALOR A PAGAR: R$ %.2f\n", due );
  }
  
}