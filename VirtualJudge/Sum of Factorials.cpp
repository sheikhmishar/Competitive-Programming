#include <bits/stdc++.h> 
#include <vector>
using namespace std;

long long fact[20] = {0}; // [0] ignore

void factorialGenerator() {
    fact[0] = 1;
    for (long long i = 1; i < 20; i++) {
        fact[i] = i * fact[i - 1];
    }
}

void presentAsSumOfFact(long long N) {
    //int result = 0, n = N;
    vector<int> factores;//can also use stack
    int i = 1;
    while (fact[i] < N && i < 19) {
        i++;
    }
    if (fact[i] == N) {
        factores.push_back(i);
        N -= fact[i];
    }
    else if (fact[i] > N) {
        i--;
        while (N > 0 && i >= 1) {
            //            if (result + fact[i] <= N) {
            //                result += fact[i];
            //                factores.push_back(i);
            //            }
            if (fact[i] <= N) {
                N -= fact[i];
                factores.push_back(i);
            }
            i--;
        }
    }

    if (N == 0) {
        for (int j = factores.size() - 1; j >= 0; j--) {
            if (j == 0) {
                cout << factores[j] << "!";
            }
            else {
                cout << factores[j] << "!+";
            }
        }

        cout << endl;

    }
    else {
        cout << "impossible" << endl;
    }

}

int main() {
    int T;
    long long tmp;
    cin >> T;
    factorialGenerator();
    for (int i = 1; i <= T; i++) {
        cin >> tmp;
        cout << "Case " << i << ": ";
        presentAsSumOfFact(tmp);
    }
    return 0;
}

/*
Given an integer n, you have to find whether it can be expressed as summation of factorials. For given n, you have to report a solution such that

n = x1! + x2! + ... + xn! (xi < xj for all i < j)

Input
Input starts with an integer T (≤ 10000), denoting the number of test cases.

Each case starts with a line containing an integer n (1 ≤ n ≤ 1018).

Output
For each case, print the case number and the solution in summation of factorial form. If there is no solution then print 'impossible'. There can be multiple solutions, any valid one will do. See the samples for exact formatting.

Sample Input
4

7

7

9

11

Sample Output
Case 1: 1!+3!

Case 2: 0!+3!

Case 3: 1!+2!+3!

Case 4: impossible

Note
Be careful about the output format; you may get wrong answer for wrong output format.
*/