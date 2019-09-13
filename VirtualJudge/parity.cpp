#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n,T;
    cin >> T;
    for(int i = 1; i <= T; i++){
    	int binSum;
        cin >> n;
        binSum = 0;
        while(n != 0){
           if(n%2 == 1)
        		binSum++;
           n/=2;
        }
        if(binSum % 2 == 0)
        	cout << "Case " << i << ": even" << endl;
        else
        	cout << "Case " << i << ": odd" << endl;
    }
    return 0;
}

/*
Given an integer n, first we represent it in binary. Then we count the number of ones. We say n has odd parity if the number of one's is odd. Otherwise we say n has even parity. 21 = (10101)2 has odd parity since the number of one's is 3. 6 = (110)2 has even parity.

Now you are given n, we have to say whether n has even or odd parity.

Input
Input starts with an integer T (≤ 1000), denoting the number of test cases.

Each case contains an integer n (1 ≤ n < 231).

Output
For each case, print the case number and 'odd' if n has odd parity, otherwise print 'even'.

Sample Input
2

21

6

Sample Output
Case 1: odd

Case 2: even
*/