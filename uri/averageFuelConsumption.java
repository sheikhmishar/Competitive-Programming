import java.util.Scanner;

public class averageFuelConsumption {
  
  public static void main(String[] args) {
    
    Scanner input = new Scanner(System.in);
    int X = input.nextInt();
    double Y = input.nextDouble();
    double Avg = X / Y;
    System.out.printf("%.3f", Avg);
    System.out.print(" km/l\n");
    
  }
}