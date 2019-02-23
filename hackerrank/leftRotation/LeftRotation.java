/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package leftrotation;
import java.util.Scanner;

/**
 *
 * @author sheikhMishar00
 */
public class LeftRotation {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner pagla = new Scanner(System.in);
        int n = pagla.nextInt();
        int d = pagla.nextInt();
        int myArray[] = new int[n];

        for(int count = 0; count < n; count++) {
            if(d > count) 
                myArray[n - d + count] = pagla.nextInt();
            else
                myArray[count - d] = pagla.nextInt();
        }
        
        for(int count = 0; count < n; count++)
            System.out.print(myArray[count] + " ");
        System.out.println();
    }
    
}
