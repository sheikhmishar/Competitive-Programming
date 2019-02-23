#include <bits/stdc++.h> 
#include <vector>
using namespace std;

vector<int> primeSet;

void primeGen() {
    bool prime[32009] = {false};
    prime[0] = true;
    prime[1] = true;
    for (int i = 3; i * i <= 32009; i += 2) {
        if (!prime[i]) {
            for (int j = i * i; j <= 32009; j += i + i) {
                prime[j] = true;
            }
        }
    }
    primeSet.push_back(2);
    for (int i = 3; i <= 32009; i += 2) {
        if (!prime[i]) {
            primeSet.push_back(i);
        }
    }
}

void printer(int starter, int ender) {
    for (int i = starter; i <= ender; i++) {
        cout << primeSet[i] << " ";
    }
    cout << endl;
}

void detPrimeSet(int n1, int n2) {
    int init = 0;
    while (primeSet [init] < n1)
        init++;
    for (int i = init; primeSet[i + 2] <= n2; i++) {
        if (primeSet[i + 1] - primeSet[i] == primeSet[i + 2] - primeSet[i + 1]) {
            int start = i, end = i + 2, diff = primeSet[i + 2] - primeSet[i + 1];
            while (i + 3 < primeSet.size() && primeSet[i + 3] - primeSet[i + 2] == diff) {
                i++;
                end++;
            }
            if(primeSet[end] >= n2)
                break;
            else{
                printer(start, end);
            }
        }
    }
}

int main() {
    int n1, n2;
    primeGen();
    while (true) {
        cin >> n1 >> n2;
        if (n1 == 0 && n2 == 0)
            return 0;
        if(n2<n1){
            int tmp = n1;
            n1 = n2;
            n2 = tmp;
        }
        if (n1 % 2 == 0)
            detPrimeSet(n1 + 1, n2);
        else
            detPrimeSet(n1, n2);
    }
    return 0;
}
/*
If three or more consecutive primes are uni-distance they are called Determinate Primes. Your task is
to print all the Determinate Prime sets between two integers (inclusive).
Input
The input is consist of several test cases. Each test case consists of two non negative integers x and y.
None of the input will be grater than 32000. Input will be terminated with two zeroes.
Output
For each test case you have to print all the Determinate Primes between x and y. Each set must be in
a different line. For clarity check out the sample input and output.
Note: No subset of a series is allowed. For example, a series of five uni-distant primes having even
four of them in the interval is not allowed, all the five primes should be in the interval.
The first two lines and the third line of the sample output are the outputs for the first and second
sample inputs respectively.
Sample Input
1 100
2 8
0 0
Sample Output
3 5 7
47 53 59
3 5 7
*/