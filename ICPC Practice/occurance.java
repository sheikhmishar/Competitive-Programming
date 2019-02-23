import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;

//Easy Problem from Rujia Liu

public class occurance{
    public static void main(String[] args) throws java.lang.Exception{
        BufferedReader pagla = new BufferedReader(new InputStreamReader(System.in));
        //Scanner chagol =  new Scanner(System.in);
        
        for(String line = ""; (line != null || line.equals("") == false);  line = pagla.readLine()){
            int n;
            if (line.matches("-?\\d+"))
                n = Integer.parseInt(line);
            else
                n = Integer.parseInt(pagla.readLine());
            int m = Integer.parseInt(pagla.readLine());
            int store[] = new int[n];
            //String Line = pagla.readLine();
            //String[] str = Line.trim().split("\\s+");
            for(int count = 0; count < n; count++){
                //store[count] = Integer.parseInt(str[count]);
                store[count] = Integer.parseInt(pagla.readLine());
            }
            System.out.println(Arrays.toString(store));
            for(int count = 1; count <= m; count++){
                int occurance = 0, done=0;
                int test = Integer.parseInt(pagla.readLine());
                int check = Integer.parseInt(pagla.readLine());
                for(int occ = 0; occ < n; occ++){
                    done = 0;
                    if(store[occ] == check)
                        occurance++;
                    if(occurance == test){
                        System.out.println(occ+1);
                        done = 1;
                        break;
                    }
                }
                if(done != 1)
                    System.out.println(0);
            }
        }
    }
}