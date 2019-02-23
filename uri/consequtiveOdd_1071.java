import java.util.Scanner;

public class consequtiveOdd_1071{
    public static void main(String[] args){
        Scanner keyboard = new Scanner(System.in);
        int X = keyboard.nextInt();
        int Y = keyboard.nextInt();
        if (X < 0){
            X *= -1;
        }
        if (Y < 0){
            Y *= -1;
        }
        int sum = 0;
        if(X > Y){
            for(int count = Y; count < X; count++){
                if(count%2 != 0){
                    sum += count;
                }
            }
        }
        if(X <= Y){
            for(int count = X; count < Y; count++){
                if(count%2 != 0){
                    sum += count;
                }
            }
        }
        System.out.println(sum);
    }
}