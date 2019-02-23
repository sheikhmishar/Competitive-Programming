
package minimumheightoftriangle;
import java.util.Scanner;

/**
 *
 * @author sheikhMishar00
 */
public class MinimumHeightOfTriangle {

    /**
     * @param args the command line arguments
     */
    public static int minheight(int a,int b)
    {
       double h=(2*a)/b;
       int h1=(int)h;
   
        int a1=(b*h1)/2;
        if(a1>=a)
        return h1;
        else
        return (h1+1);
     }

    public static void main(String[] args) {

    
     Scanner sc=new Scanner(System.in);
     int  area=sc.nextInt();
     int  base=sc.nextInt();
     int height=minheight(area,base);
     System.out.println("minimum height is  "+height);
    }
    
}
/*
 Given integers  and , find the smallest integer , such that there exists a triangle of height , base , having an area of at least .

image

Input Format

In the first and only line, there are two space-separated integers  and , denoting respectively the base of a triangle and the desired minimum area.

Constraints

Output Format

In a single line, print a single integer , denoting the minimum height of a triangle with base  and area at least .

Sample Input 0

2 2
Sample Output 0

2
Explanation 0

The task is to find the smallest integer height of the triangle with base  and area at least . It turns out, that there are triangles with height , base  and area , for example a triangle with corners in the following points: :

image

It can be proved that there is no triangle with integer height smaller than , base  and area at least .

Sample Input 1

17 100
Sample Output 1

12
Explanation 1

The task is to find the smallest integer height of the triangle with base  and area at least . It turns out, that there are triangles with height , base  and area , for example a triangle with corners in the following points: .

image

It can be proved that there is no triangle with integer height smaller than , base  and area at least .
 */