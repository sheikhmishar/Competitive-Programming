/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package designerpdfviewer;

import java.util.Scanner;

/**
 *
 * @author sheikhMishar00
 */
public class DesignerPDFviewer {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner pagla = new Scanner(System.in);
        //System.out.println((int)'a');
        int h[] = new int[26];
        for (int count = 0; count < h.length; count ++) {
            h[count] = pagla.nextInt();
        }
        String word = pagla.next();
        //String word = pagla.nextLine();

        int max = 0;//Initialized to 0 because it is below the minimum range for height
        
        for (int count = 0; count < word.length(); count++) {
            if (max < h[word.charAt(count) - 97]) //  determines if the height of the current letter is greater than max so far
            {                                    //97 is subtracted because we are using the int value of our letter for indexing
                max = h[word.charAt(count) - 97];
            }
        }
        int result = word.length() * max;
        System.out.println(result);
    }
}
