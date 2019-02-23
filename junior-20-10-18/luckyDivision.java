/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
//package checklucky;

import java.util.Scanner;

/**
 *
 * @author sheikhMishar00
 */
class luckyCheck {

    public void check(String N) {
        int result = 0;
        int copyOfN = Integer.parseInt(N);
        if (N.contains("1") || N.contains("2") || N.contains("3") || N.contains("5") || N.contains("6") || N.contains("8") || N.contains("9") || N.contains("0")) {
            if(copyOfN % 47 == 0){
                System.out.println("YES");
            }
            else if(copyOfN % 4 == 0 || copyOfN % 7 == 0){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        } else {
            System.out.println("YES");
        }
    }
}

public class luckyDivision {

    public static void main(String[] args) {
        luckyCheck ins = new luckyCheck();
        Scanner pagla = new Scanner(System.in);
        String N = pagla.next();
        ins.check(N);
    }
}
/*
Petya loves lucky numbers. Everybody knows that lucky numbers are positive integers whose decimal representation contains only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Petya calls a number almost lucky if it could be evenly divided by some lucky number. Help him find out if the given number n is almost lucky.

Input
The single line contains an integer n (1 ≤ n ≤ 1000) — the number that needs to be checked.

Output
In the only line print "YES" (without the quotes), if number n is almost lucky. Otherwise, print "NO" (without the quotes).

Examples
Input
47
Output
YES
Input
16
Output
YES
Input
78
Output
NO
Note
Note that all lucky numbers are almost lucky as any number is evenly divisible by itself.

In the first sample 47 is a lucky number. In the second sample 16 is divisible by 4.
*/