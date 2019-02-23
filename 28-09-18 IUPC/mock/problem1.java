import java.util.Scanner;

public class problem1{
  public static void main(String[] args){
    Scanner contest = new Scanner(System.in);
    String question = contest.nextLine();
    if(("Who loves Byang?").equals(question))
      System.out.println("Byangette");
    else if(("Who loves Byangette?").equals(question))
      System.out.println("Byang");
  }
}