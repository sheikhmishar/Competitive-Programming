import java.io.IOException;
import java.util.*;

public class distanceBetweenTwoPoints {
 
    public static void main(String[] args) throws IOException {
      
      Scanner input = new Scanner(System.in);
      double x1 = input.nextDouble();
      double y1 = input.nextDouble();
      double x2 = input.nextDouble();
      double y2 = input.nextDouble();
      System.out.printf("%.4f\n",Math.sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) ));
      
    }
}