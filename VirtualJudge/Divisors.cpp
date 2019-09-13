
#include <bits/stdc++.h> 
using namespace std;
int firstPos, maxDiv;

void primeFactorizer(int n) {
    int count = 1, div = 1, N = n; //or count = 0
    while (n % 2 == 0) {
        count++;
        n /= 2;
    }
    div *= count; // or +1
    if (div > maxDiv) {
        maxDiv = div;
        firstPos = N;
    }

    for (int i = 3; i * i <= n; i += 2) {
        count = 1; // or zero
        while (n % i == 0) {
            count++;
            n /= i;
        }
        div *= count;
//        div *= (count + 1);
        if (div > maxDiv) {
            maxDiv = div;
            firstPos = N;
        }
    }
    if (n > 1){
        div *= 2;
        if (div > maxDiv) {
            maxDiv = div;
            firstPos = N;
        }
    }


}

int main() {
    int start, stop, T;
    cin >> T;
    while (T--) {
        cin >> start >> stop;
        cout << "Between " << start << " and " << stop << ", ";
        firstPos = start, maxDiv = 1;
        for (int i = start; i <= stop; i++) {
            primeFactorizer(i);
        }
        cout << firstPos << " has a maximum of " << maxDiv << " divisors." << endl;
    }
    return 0;
}
/*
Mathematicians love all sorts of odd properties of numbers. For instance, they consider 945 to be an
interesting number, since it is the first odd number for which the sum of its divisors is larger than the
number itself.
To help them search for interesting numbers, you are to write a program that scans a range of
numbers and determines the number that has the largest number of divisors in the range. Unfortunately,
the size of the numbers, and the size of the range is such that a too simple-minded approach may take
too much time to run. So make sure that your algorithm is clever enough to cope with the largest
possible range in just a few seconds.
Input
The first line of input specifies the number N of ranges, and each of the N following lines contains a
range, consisting of a lower bound L and an upper bound U, where L and U are included in the range.
L and U are chosen such that 1 ≤ L ≤ U ≤ 1000000000 and 0 ≤ U − L ≤ 10000.
Output
For each range, find the number P which has the largest number of divisors (if several numbers tie for
first place, select the lowest), and the number of positive divisors D of P (where P is included as a
divisor). Print the text ‘Between L and H, P has a maximum of D divisors.’, where L, H, P,
and D are the numbers as defined above.
Sample Input
3
1 10
1000 1000
999999900 1000000000
Sample Output
Between 1 and 10, 6 has a maximum of 4 divisors.
Between 1000 and 1000, 1000 has a maximum of 16 divisors.
Between 999999900 and 1000000000, 999999924 has a maximum of 192 divisors.
*/