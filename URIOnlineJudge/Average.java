import java.util.Scanner;
public class Average {
    public static void main(String[] args){
        double A, B;
        Scanner sc = new Scanner(System.in);
        A = sc.nextDouble();
        B = sc.nextDouble();
        System.out.printf("MEDIA = %.5f\n", (((A * 3.5) + (B * 7.5)) / (3.5 + 7.5)) );
  }
}