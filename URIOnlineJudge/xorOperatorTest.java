import java.io.IOException;

public class xorOperatorTest {
  
  public static void main(String[] args) throws IOException {
    
    
    boolean a = false, b = false, c= false;
    
    a = true; b = true; c= a && b;
    System.out.println("a = "+a);
    System.out.println("b = "+b);
    System.out.println("________________________________________________________________________");
    
    System.out.println("For AND");
    
    System.out.println("c = "+c);
    System.out.println("________________________________________________________________________");
    
    c= a || b;
    System.out.println("For OR");
    
    System.out.println("c = "+c);
    System.out.println("________________________________________________________________________");
    
    c = !(a && b);
    System.out.println("For NAND");
    System.out.println("c = "+c);
    System.out.println("________________________________________________________________________");
    
    c= !(a || b);
    System.out.println("For NOR");
    System.out.println("c = "+c);
    System.out.println("________________________________________________________________________");
    
    c= (a ^ b);
    System.out.println("For XOR");
    System.out.println("c = "+c);
    
    System.out.println("************************************************************************");
    
    a = true; b = false; c= a && b;
    System.out.println("a = "+a);
    System.out.println("b = "+b);
    System.out.println("________________________________________________________________________");
    
    System.out.println("For AND");
    
    System.out.println("c = "+c);
    System.out.println("________________________________________________________________________");
    
    c= a || b;
    System.out.println("For OR");
    
    System.out.println("c = "+c);
    System.out.println("________________________________________________________________________");
    
    c = !(a && b);
    System.out.println("For NAND");
    System.out.println("c = "+c);
    System.out.println("________________________________________________________________________");
    
    c= !(a || b);
    System.out.println("For NOR");
    System.out.println("c = "+c);
    System.out.println("________________________________________________________________________");
    
    c= (a ^ b);
    System.out.println("For XOR");
    System.out.println("c = "+c);
    
    System.out.println("************************************************************************");
    
    a = false; b = true; c= a && b;
    System.out.println("a = "+a);
    System.out.println("b = "+b);
    System.out.println("________________________________________________________________________");
    
    System.out.println("For AND");
    
    System.out.println("c = "+c);
    System.out.println("________________________________________________________________________");
    
    c= a || b;
    System.out.println("For OR");
    
    System.out.println("c = "+c);
    System.out.println("________________________________________________________________________");
    
    c = !(a && b);
    System.out.println("For NAND");
    System.out.println("c = "+c);
    System.out.println("________________________________________________________________________");
    
    c= !(a || b);
    System.out.println("For NOR");
    System.out.println("c = "+c);
    System.out.println("________________________________________________________________________");
    
    c= (a ^ b);
    System.out.println("For XOR");
    System.out.println("c = "+c);
    
    System.out.println("************************************************************************");
    
    
    a = false; b = false; c= a && b;
    System.out.println("a = "+a);
    System.out.println("b = "+b);
    System.out.println("________________________________________________________________________");
    
    System.out.println("For AND");
    
    System.out.println("c = "+c);
    System.out.println("________________________________________________________________________");
    
    c= a || b;
    System.out.println("For OR");
    
    System.out.println("c = "+c);
    System.out.println("________________________________________________________________________");
    
    c = !(a && b);
    System.out.println("For NAND");
    System.out.println("c = "+c);
    System.out.println("________________________________________________________________________");
    
    c= !(a || b);
    System.out.println("For NOR");
    System.out.println("c = "+c);
    System.out.println("________________________________________________________________________");
    
    c= (a ^ b);
    System.out.println("For XOR");
    System.out.println("c = "+c);
    
    boolean[] all = { false, true };
    for (boolean q : all) {
      for (boolean w: all) {
        boolean e = q ^ w;
        System.out.println(q + " ^ " + w + " = " + e);
      }
    }
    
    //boolean x=true,y=true;
    //public static boolean logicalXOR(x, y) {
    //return ( ( x || y ) && ! ( x && y ) );
    //}
    //boolean myVal = logicalXOR(x, y);
    
    
    
  }
  
}