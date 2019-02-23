import java.util.Scanner;

public class DDD_1050{
    public static void main(String[] args){
        Scanner keyboard = new Scanner(System.in);
        int input = keyboard.nextInt();
        if(input == 61){
            System.out.println("Brasilia");
        }
        else if(input == 71){
            System.out.println("Salvador");
        }
        else if(input == 11){
            System.out.println("Sao Paulo");
        }
        else if(input == 21){
            System.out.println("Rio de Janeiro");
        }
        else if(input == 32){
            System.out.println("Juiz de Fora");
        }
        else if(input == 19){
            System.out.println("Campinas");
        }
        else if(input == 27){
            System.out.println("Vitoria");
        }
        else if(input == 31){
            System.out.println("Belo Horizonte");
        }
        else {
            System.out.println("DDD nao cadastrado");
        }
    }
}