import java.util.Scanner;

public class seqSum_1101{
    public static void main(String[] args){
        Scanner keyboard = new Scanner(System.in);
        int num1, num2, sum=0;
        do {
            num1 = keyboard.nextInt();
            num2 = keyboard.nextInt();
            int min = Math.min(num1, num2);
            int max = Math.max(num1, num2);
            for(int count = min; count <= max; count++){
                System.out.printf("%d ", count);
                if(num1 > 0 && num2 > 0){
                    sum += count;
                }
            }
            System.out.printf("Sum=%d", sum);
        } while(num1 <= 0 || num2 <= 0);
    }
}