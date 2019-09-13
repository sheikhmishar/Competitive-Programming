import java.util.Scanner;

public class animal_1049{
    public static void main(String[] args){
        Scanner keyboard = new Scanner(System.in);
        String A = keyboard.next();
        String B = keyboard.next();
        String C = keyboard.next();
        if(A.equals("vertebrado")){
            if(B.equals("ave")){
                if(C.equals("carnivoro")){
                    System.out.println("aguia");
                }
                else if(C.equals("onivoro")){
                    System.out.println("pomba");
                }
            }
            else if(B.equals("mamifero")){
                if(C.equals("onivoro")){
                    System.out.println("homem");
                }
                if(C.equals("herbivoro")){
                    System.out.println("vaca");
                }
            }
        }
        else if(A.equals("invertebrado")){
            if(B.equals("inseto")){
                if(C.equals("hematofago")){
                    System.out.println("pulga");
                }
                   else if(C.equals("herbivoro")){
                       System.out.println("lagarta");
                   }
                   }
            else if(B.equals("anelideo")){
                if(C.equals("hematofago")){
                    System.out.println("sanguessuga");
                }
                if(C.equals("onivoro")){
                    System.out.println("minhoca");
                }
            }
            }
    }
}