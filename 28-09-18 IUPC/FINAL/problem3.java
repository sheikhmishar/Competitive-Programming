import java.util.*;

public class problem3{
  public static void main(String[] args){
    Scanner contest = new Scanner(System.in);
    long x= contest.nextLong();
    long y= contest.nextLong();
    long z= contest.nextLong();
    long result=x;
    if (x>y){
      if (x>z){
        result = x;
      }
      else if(y<z){
        result = z;
      }
    }
    else if (x<y){
      if (y>z)
        result = y;
      else
        result = z;
    }
    System.out.println(result);
  }
}