import java.io.IOException;
import java.util.Scanner;

public class snack {
  
  public static void main(String[] args) throws IOException {
    
    int X, Y;
    double price = 0;
    
    Scanner input = new Scanner(System.in);
    X = input.nextInt();
    Y = input.nextInt();
    
    if (X == 1) {
      price  = (4.00 * Y);
    }
    
    else if (X == 2) {
      price  = (4.50 * Y);
    }
    
    else if (X == 3) {
      price  = (5.00 * Y);
    }
    
    else if (X == 4) {
      price  = (2.00 * Y);
    }
    
    else if (X == 5) {
      price  = (1.50 * Y);
    }
    
    System.out.printf("Total: R$ %.2f\n",price);
    
  }
  
}