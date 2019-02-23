import java.util.Scanner;

public class sixOddNumbers_1068{
    public static void main(String[] args){
        Scanner keyboard = new Scanner(System.in);
        int X = keyboard.nextInt(), sum = X;
        for(int printCount=1; printCount <= 6;){
            sum++;
            if(sum%2 != 0){
                System.out.println(sum);
                printCount++;
            }
        }
    }
}