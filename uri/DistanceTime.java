import java.io.IOException;
import java.util.Scanner;
 
public class DistanceTime {
 
    public static void main(String[] args) throws IOException {
 
        Scanner input = new Scanner(System.in);
        int Distance = input.nextInt();
        int X = (int) (Distance/((90/60.0)-(60/60.0)));
        System.out.println(X + " minutos");
        
        
 
    }
 
}