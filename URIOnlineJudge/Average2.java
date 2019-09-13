import java.util.Scanner;
public class Average2 {
    public static void main(String[] args){
        float A, B, C;
        Scanner sc = new Scanner(System.in);
        A = sc.nextFloat();
        B = sc.nextFloat();
        C = sc.nextFloat();
        System.out.printf("MEDIA = %.1f\n", ( ( (A * 2) + (B * 3) + (C * 5) ) / (2 + 3 + 5) ) );
  }
}