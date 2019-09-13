
#include <bits/stdc++.h> 
using namespace std;

void primeChecker(long long n) {
    // Print the number of 2s that divide n 
    while (n % 2 == 0) {
        cout << " " << 2;
        n = n / 2;
    }
    // n must be odd at this point.  So we can skip  
    // one element (Note i = i +2) 
    for (long long i = 3; i * i <= n; i += 2) {
        // While i divides n, print i and divide n 
        while (n % i == 0) {
            cout << " " << i;
            n = n / i;
        }
        //        if(n<i){
        //            break;
        //        }
    }
    // This condition is to handle the case when n  
    // is a prime number greater than 2 
    if (n > 2) //bogus
        cout << " " << n; ////bogus
}

int main() {
    long long n;
    cin >> n;
    cout << n << ":";
    primeChecker(n);
    cout << endl;
    return 0;
} 

/*
Prime Factorization

Factorize a given integer n.

Input
n
An integer n is given in a line.

Output
Print the given integer n and :. Then, print prime factors in ascending order. If n is divisible by a prime factor several times, the prime factor should be printed according to the number of times. Print a space before each prime factor.

Constraints
2 ? n ? 109
Sample Input 1
12
Sample Output 1
12: 2 2 3

Sample Input 2
126
Sample Output 2
126: 2 3 3 7
*/