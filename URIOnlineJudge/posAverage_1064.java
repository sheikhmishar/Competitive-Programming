import java.util.Scanner;

public class posAverage_1064{
    public static void main(String[] args){
        Scanner keyboard = new Scanner(System.in);
        int posCount = 0;
        double sum = 0, avg;
        for(int count = 1; count <= 6; count++){
            double input = keyboard.nextDouble();
            if(input >= 0){
                posCount++;
                sum += input;
            }
        }
        avg = sum/(double)posCount;
        System.out.printf("%d valores positivos\n%.1f\n", posCount, avg);
    }
}