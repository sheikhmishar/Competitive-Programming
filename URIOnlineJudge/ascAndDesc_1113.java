import java.util.Scanner;

public class ascAndDesc_1113{
    public static void main(String[] args){
        Scanner keyboard = new Scanner(System.in);
        int num1, num2;
        do {
            num1 = keyboard.nextInt();
            num2 = keyboard.nextInt();
            if(num1 > num2){
                System.out.println("Decrescente");
            }
            else if(num1 < num2){
                System.out.println("Crescente");
            }
        } while(num1 != num2);
    }
}