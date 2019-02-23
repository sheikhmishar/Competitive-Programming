import java.util.*;

public class problem2{
  public static void main(String[] args){
    Scanner contest = new Scanner(System.in);
    String hash = contest.nextLine();
    String []parts = hash.split(" ");
    for(int i=0; i<parts.length; i++){
      System.out.print(parts[i]);
    }
    System.out.print("\n");
  }
}