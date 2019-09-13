import java.io.IOException;
import java.util.Scanner;

public class ageInDays {
 
    public static void main(String[] args) throws IOException {
 
      Scanner input = new Scanner(System.in);
      int days = input.nextInt();
      System.out.println( (days/365) + " ano(s)\n" + ((days%365)/30) + " mes(es)\n" + ((days%365)%30) + " dia(s)" );

    } 
}