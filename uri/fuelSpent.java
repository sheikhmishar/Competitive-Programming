import java.io.IOException;
import java.util.Scanner;

public class fuelSpent {
 
    public static void main(String[] args) throws IOException {
 
      Scanner input = new Scanner(System.in);
      int spentTime = input.nextInt();
      int averageSpeed = input.nextInt();
      double spentFuel = (averageSpeed * spentTime) / 12.0 ;
      System.out.printf("%.3f\n",spentFuel);
      
    } 
}