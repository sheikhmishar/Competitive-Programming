#include <bits/stdc++.h> 
#include <vector>
using namespace std;
//int digits[] = {2, 3, 5, 7};
 
void prodDigChecker(int tmp) {
    int prod = 1, N = tmp;
    vector<int> reserve;
    for (int i = 9; i >= 2; i--) {
        while (tmp % i == 0) {
            prod *= i;
            reserve.push_back(i);
            tmp /= i;
        }
    }
    while (tmp > 2) {
        prod *= tmp % 10;
        reserve.push_back(tmp % 10);
        tmp /= 10;
    }
    if (prod == N) {
        for (int i = reserve.size()-1; i >= 0; i--) {
            cout << reserve[i];
        }
        cout << endl;
    } else {
        cout << -1 << endl;
    }
}
 
int main() {
    int T, tmp;
    cin >> T;
    while (T--) {
        cin >> tmp;
        if (tmp / 10 == 0)
            cout << tmp << endl;
        else
            prodDigChecker(tmp);
    }
    return 0;
}
 

/*
For a given non-negative integer number N, find the minimal natural Q such that the product of all
digits of Q is equal N.
Input
The first line of input contains one positive integer number, which is the number of data sets. Each
subsequent line contains one data set which consists of one non-negative integer number N (0 ≤ N ≤
109
).
Output
For each data set, write one line containing the corresponding natural number Q or ‘-1’ if Q does not
exist.
Sample Input
3
1
10
123456789
Sample Output
1
25
-1
*/