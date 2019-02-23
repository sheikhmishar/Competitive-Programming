import java.util.*;

public class problem5{
  public static void main(String[] args){
    Scanner contest = new Scanner(System.in);
    int T = contest.nextInt();
    for(int count=1; count <= T; count++){
      int source, target;
      int a = contest.nextInt();
      int b = contest.nextInt();
      int c = contest.nextInt();
      int d = contest.nextInt();
      if(c>a){
        source = c-a;
      }
      else{
        source = a-c;
      }
      if(d>b){
        target = d - b;
      }
      else{
        target = b-d;
      }
      if(source == target){
        System.out.println("Yes");
      }
      else{
        System.out.println("No");;
      }
    }
  }
}