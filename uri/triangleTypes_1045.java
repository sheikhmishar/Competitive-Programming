import java.util.Scanner;

public class triangleTypes_1045{
    public static void main(String[] args){
        Scanner keyboard = new Scanner(System.in);
        double tempA, tempB, tempC;
        double A=0, B=0, C=0;
        tempA = keyboard.nextDouble();
        tempB = keyboard.nextDouble();
        tempC = keyboard.nextDouble();
        A = Math.max(tempA, Math.max(tempB, tempC));
        if(A == tempA){
            B = Math.max(tempB, tempC);
            C = Math.min(tempB, tempC);
        }
        if(A == tempB){
            B = Math.max(tempA, tempC);
            C = Math.min(tempA, tempC);
        }
        if(A == tempC){
            B = Math.max(tempA, tempB);
            C = Math.min(tempA, tempB);
        }
        /*double A = keyboard.nextDouble();
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
         }*/
        if( A >= B+C ){
            System.out.println("NAO FORMA TRIANGULO");
        }
        else if (A*A > B*B + C*C ){
            System.out.println("TRIANGULO OBTUSANGULO");
        }
        if (A*A == B*B + C*C ){
            System.out.println("TRIANGULO RETANGULO");
        }
        if (A*A < B*B + C*C ){
            System.out.println("TRIANGULO ACUTANGULO");
        }
        if (A==B && A==C){
            System.out.println("TRIANGULO EQUILATERO");
        }
        if (((A==B) && (A!=C)) || ((A==C) &&(A!=B)) || ((B==C) &&(B!=A))){
            System.out.println("TRIANGULO ISOSCELES");
        }
    }
}