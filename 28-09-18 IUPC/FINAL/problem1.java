import java.util.*;

public class problem1{
  public static void main(String[] args){
    Scanner contest = new Scanner(System.in);
    String word= contest.nextLine();
    word= word.toLowerCase();
    char[] box= word.toCharArray();
    int counter=0;
    for (int i=0; i<box.length; i++){
      if (box[i]=='a' || box[i]=='e'||box[i]=='i'||box[i]=='o'||box[i]=='u'){
        counter+=1;
      }
    }
    System.out.println(counter);
  }
}
