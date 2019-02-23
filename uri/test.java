


import java.io.IOException;
import java.util.Scanner;

public class test {
    
    public static void main(String[] args) throws IOException {
        
        Scanner keyboard = new Scanner(System.in);
        double A = keyboard.nextDouble();
        double temp;
        double B = keyboard.nextDouble();
        if(B > A){
            temp = B;
            B = A;
            A = temp;
        }
        double C = keyboard.nextInt();
        if(C > A){
            temp = C;
            C = A;
            A = temp;
        }
        if( C > B){
            temp = C;
            C = B;
            B = temp;
        }
        System.out.println(A);
        
        System.out.println(B);
        
        System.out.println(C);
    } 
}