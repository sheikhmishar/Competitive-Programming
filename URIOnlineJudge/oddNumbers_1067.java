import java.util.Scanner;

public class oddNumbers_1067{
    public static void main(String[] args){
        Scanner keyboard = new Scanner(System.in);
        int X;
        for(X = keyboard.nextInt(); X < 1 || X > 1000;){
            X = keyboard.nextInt();
        }
        for(int count = 1; count <= X; count++){
            if(count%2 != 0){
                System.out.println(count);
            }
        }
        
    }
}