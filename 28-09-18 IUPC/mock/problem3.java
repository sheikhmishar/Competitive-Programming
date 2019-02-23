import java.util.*;

public class problem3{
  public static void main(String[] args){
    Scanner contest = new Scanner(System.in);
    int N = contest.nextInt();
    for(int count =1; count<= N; count++){
      int num1 =  contest.nextInt();
      int num2 = contest.nextInt();
      System.out.println("Case " + count + ": " + (num1 + num2) + (num1-num2));
    }
  }
}