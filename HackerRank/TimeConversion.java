
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.*;
public class TimeConversion {

    /*
     * Complete the timeConversion function below.
     */
    //static String timeConversion(String s) {
        /*String []parts = s.split(":");
        int hh = Integer.parseInt(parts[0]);
        String res;
        if(parts[2].contains("PM")){
            hh += 12;
            parts[2] = parts[2].replaceAll("[^\\d.]", "");
            if (hh == 24) {
                res = ("00:" + parts[1] + ":" + parts[2]);
            } 
            else {
                res = (hh + ":" + parts[1] + ":" + parts[2]);
            }
        }
        else{
            parts[2] = parts[2].replaceAll("[^\\d.]", "");
            res = (parts[0] + ":"+parts[1]+":"+ parts[2]);
        }
        
         
        
        return (res);

    }*/

    public static void main(String[] args) throws Exception{
        Scanner kb = new Scanner(System.in);
        String s = kb.nextLine();

        SimpleDateFormat displayFormat = new SimpleDateFormat("HH:mm:ss");
        SimpleDateFormat parseFormat = new SimpleDateFormat("hh:mm:ssaa");
        Date date = parseFormat.parse(s);
        String res = (/*parseFormat.format(date) + " = " +*/ displayFormat.format(date));
        System.out.println(res);
    }

}
/*
Given a time in -hour AM/PM format, convert it to military (24-hour) time.

Note: Midnight is 12:00:00AM on a 12-hour clock, and 00:00:00 on a 24-hour clock. Noon is 12:00:00PM on a 12-hour clock, and 12:00:00 on a 24-hour clock.

Function Description

Complete the timeConversion function in the editor below. It should return a new string representing the input time in 24 hour format.

timeConversion has the following parameter(s):

s: a string representing time in  hour format
Input Format

A single string  containing a time in -hour clock format (i.e.:  or ), where  and .

Constraints

All input times are valid
Output Format

Convert and print the given time in -hour format, where .

Sample Input 0

07:05:45PM
Sample Output 0

19:05:45
*/