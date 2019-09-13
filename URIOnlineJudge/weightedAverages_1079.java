import java.util.Scanner;

public class weightedAverages_1079{
    public static void main(String[] args){
        Scanner keyboard = new Scanner(System.in);
        int N = keyboard.nextInt();
        for(int count = 1; count <= N; count++){
            double num1 = keyboard.nextDouble();
            double num2 = keyboard.nextDouble();
            double num3 = keyboard.nextDouble();
            double avg = ( num1*2 + num2*3 +num3*5 ) / (2+3+5);
            System.out.printf("%.1f", avg);
        }
    }
}