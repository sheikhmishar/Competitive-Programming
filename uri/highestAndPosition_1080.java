import java.util.Scanner;

public class highestAndPosition_1080{
    public static void main(String[] args){
        Scanner keyboard = new Scanner(System.in);
        int highest = keyboard.nextInt();
        int highestLoc = 1;
        for(int count = 2; count <= 100; count++){
            int num = keyboard.nextInt();
            if(num > highest){
                highest = num;
                highestLoc = count;
            }
        }
        System.out.printf("%d\n%d\n", highest, highestLoc);
    }
}