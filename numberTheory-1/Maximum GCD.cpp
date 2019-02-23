#include <bits/stdc++.h>
#include <vector>
#include <sstream>
using namespace std;

vector<int> numberSplitter(string s) {
    vector<int> ret;
    int tmp;
    istringstream mv(s);
    while (mv >> tmp) {
        ret.push_back(tmp);
    }
    return ret;
}

int gcd(int a, int b){
    if (a%b == 0) 
        return b; 
    return gcd(b%a, a);
}

int main() {
    int T; // testCases
    cin >> T;
    cin.ignore();
    while (T--) {
        string pairs;
        getline(cin, pairs);
        vector<int> pairHolder;
        pairHolder = numberSplitter(pairs);
//        for(int i=0; i<pairHolder.size(); i++){
//            cout << pairHolder[i] << endl;
//        }
        int size = pairHolder.size();
        int maxGcd = 1;
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                if(i==j)
                    continue;
                int gcdValue = gcd(pairHolder[i],pairHolder[j]);
                if( gcdValue > maxGcd)
                    maxGcd = gcdValue;
            }
        
        }
        cout << maxGcd << endl;
    }

    return 0;
}
/*
Given the N integers, you have to find the maximum GCD (greatest common divisor) of every possible
pair of these integers.
Input
The first line of input is an integer N (1 < N < 100) that determines the number of test cases.
The following N lines are the N test cases. Each test case contains M (1 < M < 100) positive
integers that you have to find the maximum of GCD.
Output
For each test case show the maximum GCD of every possible pair.
Sample Input
3
10 20 30 40
7 5 12
125 15 25
Sample Output
20
1
25
*/