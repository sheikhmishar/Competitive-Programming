import java.io.IOException;
import java.util.Scanner;
 
public class Difference {
 
    public static void main(String[] args) throws IOException {
 
        Scanner input = new Scanner(System.in);
        int A = input.nextInt();
        int B = input.nextInt();
        int C = input.nextInt();
        int D = input.nextInt();
        int X = (A * B - C * D);
        System.out.println("DIFERENCA = "+ X);
        
        
 
    }
 
}