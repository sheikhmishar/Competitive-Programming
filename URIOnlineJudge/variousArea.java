import java.io.IOException;
import java.util.Scanner;

public class variousArea {
  
  public static void main(String[] args) throws IOException {
    
    Scanner input = new Scanner(System.in);
    double Pi = 3.14159;
    double A = input.nextDouble();
    double B = input.nextDouble();
    double C = input.nextDouble();
    double triangle = (0.5 * A * C);
    double circle = (Pi * C * C);
    double trapezium = (0.5 * (A + B) * C);
    double square = (B * B);
    double rectangle = (A * B);
    
    System.out.printf("TRIANGULO: %.3f\n", triangle );
    System.out.printf("CIRCULO: %.3f\n", circle );
    System.out.printf("TRAPEZIO: %.3f\n", trapezium );
    System.out.printf("QUADRADO: %.3f\n", square );
    System.out.printf("RETANGULO: %.3f\n", rectangle );
  }
  
}