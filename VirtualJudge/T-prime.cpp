#include <bits/stdc++.h>
using namespace std;
#define mejajKharap 1000000
bool primeArray[mejajKharap] = {false};
void primeGenerator(){
    primeArray[0] = primeArray[1] = true;
    for(long long i=3; i< mejajKharap; i+=2){
        if (!primeArray[i]){
            for(long long j = i*i ; j < mejajKharap; j+= i + i){
                primeArray[j] = true;
            }
        }
    }
}
bool checkIntSquare(long long n){
    double sqrtN = sqrt(n);
    if(sqrtN == (int)sqrtN){
        return true;
    }
    return false;
}

int main(){
    primeGenerator();
    int n;
    cin >> n;
    while(n--){
        long long x;
        cin >> x;
        if (x == 4){
            cout << "YES" << endl;
        }
        else if (x%2 == 0){
            cout << "NO" << endl;
        }
        else if(checkIntSquare(x) && !primeArray[int(sqrt(x))]){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

/*We know that prime numbers are positive integers that have exactly two distinct positive divisors. Similarly, we'll call a positive integer t ?-prime, if t has exactly three distinct positive divisors.

You are given an array of n positive integers. For each of them determine whether it is ?-prime or not.

Input
The first line contains a single positive integer, n (1???n???105), showing how many numbers are in the array. The next line contains n space-separated integers xi (1???xi???1012).

Please, do not use the %lld specifier to read or write 64-bit integers in ?++. It is advised to use the cin, cout streams or the %I64d specifier.

Output
Print n lines: the i-th line should contain "YES" (without the quotes), if number xi is ?-prime, and "NO" (without the quotes), if it isn't.

Examples
Input
3
4 5 6
Output
YES
NO
NO
Note
The given test has three numbers. The first number 4 has exactly three divisors — 1, 2 and 4, thus the answer for this number is "YES". The second number 5 has two divisors (1 and 5), and the third number 6 has four divisors (1, 2, 3, 6), hence the answer for them is "NO".
*/