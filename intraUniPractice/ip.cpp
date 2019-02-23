#include <bits/stdc++.h>

using namespace std;


int convertBinaryToDecimal(int n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n>0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}

int main()
{
        int T,a,b,c,d,w,x,y,z;
        cin >> T;
        for(int count = 1; count <= T; count++)
        {
                scanf("%d.%d.%d.%d",&a,&b,&c,&d);
                scanf("%d.%d.%d.%d",&w,&x,&y,&z);
                int p = convertBinaryToDecimal(w), q = convertBinaryToDecimal(x), r = convertBinaryToDecimal(y), s=convertBinaryToDecimal(z);
                if(a==p&&b==q&&c==r&&d==s)
            	cout << "Case " << count << ": " << "Yes" << endl;
                else
            	cout << "Case " << count << ": " << "No" << endl;
            	
        }
        return 0;


}

/*
An IP address is a 32 bit address formatted in the following way

a.b.c.d

where a, b, c, d are integers each ranging from 0 to 255. Now you are given two IP addresses, first one in decimal form and second one in binary form, your task is to find if they are same or not.

Input
Input starts with an integer T (≤ 100), denoting the number of test cases.

Each case starts with two lines. First line contains an IP address in decimal form, and second line contains an IP address in binary form. In binary form, each of the four parts contains 8 digits. Assume that the given addresses are valid.

Output
For each case, print the case number and "Yes" if they are same, otherwise print "No".

Sample Input
2

192.168.0.100

11000000.10101000.00000000.11001000

65.254.63.122

01000001.11111110.00111111.01111010

Sample Output
Case 1: No

Case 2: Yes
*/