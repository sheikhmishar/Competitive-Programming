import java.util.Scanner;

public class bhaskarsRoot {
 
  public static void main(String[] args) {
    
    float A, B, C, R1, R2;
    
    Scanner input =new Scanner(System.in);
    
    A = input.nextFloat();
    
    B = input.nextFloat();
    
    C = input.nextFloat();
    
    
    
    if ((A == 0) || (((B*B) -(4*A*C)) < 0)) {
      
      System.out.print("Impossivel calcular\n");
      
    }
    
    else {
      
      R1 =(float) ((-B + Math.sqrt(((B*B) -(4*A*C)))) / (2*A));
      
      R2 =(float) ((-B - Math.sqrt(((B*B) -(4*A*C)))) / (2*A));
        
      System.out.printf("R1 = %.5f\n", R1);
      
      System.out.printf("R2 = %.5f\n", R2);
      
    }
    
  }
  
}


