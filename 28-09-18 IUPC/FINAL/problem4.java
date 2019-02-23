import java.util.*;

public class problem4{
  public static void main(String[] args){
    Scanner contest = new Scanner(System.in);
    int A= contest.nextInt();
    int B= contest.nextInt();
    int odd=0;
    for (int count=A; count<=B; count++){
      if (count % 2!= 0)
        odd++;
    }
    System.out.println(odd);
  }
}