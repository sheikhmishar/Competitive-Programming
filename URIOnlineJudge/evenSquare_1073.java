import java.util.Scanner;

public class evenSquare_1073{
    public static void main(String[] args){
        Scanner keyboard = new Scanner(System.in);
        int N;
        for(N = keyboard.nextInt(); N <= 5 || N >= 2000;){
            N = keyboard.nextInt();
        }
        for(int count = 1; count <= N; count++){
            if(count%2 == 0){
                System.out.println(count + "^" + 2 + " = " + (int)(Math.pow(count, 2)));
            }
        }
    }
}