import java.io.IOException;
import java.util.Scanner;

public class volumeOfSphere {
  
  public static void main(String[] args) throws IOException {
    
    Scanner input = new Scanner(System.in);
    double R = input.nextDouble();
    double Pi = 3.14159;
    double V = ((4.0/3) * Pi * R * R * R);
    System.out.printf("VOLUME = %.3f\n", V );
  }
  
}