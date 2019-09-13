import java.util.Scanner;

public class evenOddPosNeg_1066{
    public static void main(String[] args){
        Scanner keyboard = new Scanner(System.in);
        int evenCount = 0, oddCount = 0, posCount = 0, negCount =0;
        for(int count = 1; count <= 5; count++){
            double input = keyboard.nextDouble();
            if(input%2 == 0){
                evenCount++;
            }
            else{
                oddCount++;
            }
            if(input > 0){
                posCount++;
            }
            else if(input < 0){
                negCount++;
            }
            
        }
        System.out.printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", evenCount, oddCount, posCount, negCount);
    }
}