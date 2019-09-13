import java.util.Scanner;

public class evenOrOdd_1074{
    public static void main(String[] args){
        Scanner keyboard = new Scanner(System.in);
        int N;
        for(N = keyboard.nextInt(); N >= 10000;){
            N = keyboard.nextInt();
        }
        for(int count = 1; count <= N; count++){
            int X = keyboard.nextInt();
            if(X == 0){
                System.out.println("NULL");
            }
            else if(X%2 == 0){
                if(X > 0){
                    System.out.println("EVEN POSITIVE");
                }
                else if(X < 0){
                    System.out.println("EVEN NEGATIVE");
                }
            }
            else if(X%2 != 0){
                if(X > 0){
                    System.out.println("ODD POSITIVE");
                }
                else if(X < 0){
                    System.out.println("ODD NEGATIVE");
                }
            }
        }
        
    }
}