import java.io.IOException;
import java.util.Scanner;

public class timeConversion {
 
    public static void main(String[] args) throws IOException {
 
      Scanner input = new Scanner(System.in);
      int second = input.nextInt();
      System.out.println( (second/3600) + ":" + ((second%3600)/60) + ":" + ((second%3600)%60)  );

    } 
}