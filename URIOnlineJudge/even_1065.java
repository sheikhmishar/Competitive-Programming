import java.util.Scanner;

public class even_1065{
    public static void main(String[] args){
        Scanner keyboard = new Scanner(System.in);
        int evenCount = 0;
        for(int count = 1; count <= 5; count++){
            double input = keyboard.nextDouble();
            if(input%2 == 0){
                evenCount++;
            }
        }
        System.out.printf("%d valores pares\n", evenCount);
    }
}