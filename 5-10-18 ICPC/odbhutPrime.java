import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.BigInteger;
public class odbhutPrime{
  public static void main(String[]args)throws java.io.IOException{
    BufferedReader mew=new BufferedReader(new InputStreamReader(System.in));
    int t=Integer.parseInt(mew.readLine());
    for(int i=1;i<=t;i++){
      Long a=Long.parseUnsignedLong(mew.readLine());
      outer : for(Long j=a;j>=1;j--){
        int count=0;
        inner  : for(Long k=Long.parseUnsignedLong("2");k<j;k++){
          if(j%k==0){
            count++;
            break inner;
          }
        }
        if(count==0){
          String s=Long.toString(j);
          if(!s.contains("1")&&!s.contains("4")&&!s.contains("6")&&!s.contains("8")&&!s.contains("9")&&!s.contains("0")){
            System.out.println("Case "+i+": "+j);
            break outer;
          }
        }
      }
    }
  }
}