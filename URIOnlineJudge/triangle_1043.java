import java.util.Scanner;



public class triangle_1043 {
    
    
    
    public static void main(String[] args) {
        
        float A, B, C, areaTraphisium, perimeterTriangle ;
        
        
        
        Scanner input =new Scanner(System.in);
        
        A = input.nextFloat();
        
        B = input.nextFloat();
        
        C = input.nextFloat();
        
        
        
        if ((A < (float)(B+C)) && (B < (float)(A+C)) && (C < (float)(B+A))) {
            
            //Triangle perimeter = a + b + c;
            
            //Traphisium area is = (a + b)*h/2
            
            perimeterTriangle = A + B + C;
            
            System.out.printf("Perimetro = %.1f\n",perimeterTriangle);
            
            
            
            
            
        }else {
            
            areaTraphisium = ((A + B) * C) / 2;
            
            System.out.printf("Area = %.1f\n",areaTraphisium);
            
        }
        
    }
    
    
    
}