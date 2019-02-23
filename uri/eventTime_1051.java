import java.util.Scanner;

public class eventTime_1051{
    public static void main(String[] args){
        Scanner keyboard = new Scanner(System.in);
        String X;
        X = keyboard.next();
        int W1 = keyboard.nextInt();
        int X1 = keyboard.nextInt();
        X = keyboard.next();
        int Y1 = keyboard.nextInt();
        X = keyboard.next();
        int Z1 = keyboard.nextInt();
        X = keyboard.next();
        int W2 = keyboard.nextInt();
        int X2 = keyboard.nextInt();
        X = keyboard.next();
        int Y2 = keyboard.nextInt();
        X = keyboard.next();
        int Z2 = keyboard.nextInt();
        int seconds=0, minutes=0, hours=0, days=0;
        if(Z2 < Z1){
            seconds = (Z2 + 60) - Z1;
            Y1++;
        }
        else {
            seconds = Z2 - Z1;
        }
        if(Y2 < Y1){
            minutes = (Y2 + 60) - Y1;
            X1++;
        }
        else {
            minutes = Y2 - Y1;
        }
        if(X2 < X1){
            hours = (X2 + 24) - X1;
            W1++;
        }
        else {
            hours = X2 - X1;
        }
        days = W2 - W1;
        System.out.printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", days, hours, minutes, seconds);
    }
}