#include <bits/stdc++.h> 
using namespace std;

void primeChecker(long long n, bool flag) {
    while (n % 2 == 0) {
        if(!flag){
        	cout << 2;
        	flag = true;
        }
        else{
        	cout << " x " << 2;
        }
        n = n / 2;
    }
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
        	if(!flag){
            	cout << i;
            	flag = true;
        	}
        	else{
        		cout << " x " << i;
        	}
            n = n / i;
        }
    }
    if (n > 2){
    	if(!flag){
            	cout << n;
            	flag = true;
       	}
       	else{
        	cout << " x " << n;
        }
    }
}

int main() {
    long long n;
    while(true){
	    cin >> n;
	    if(n == 0)
	    	return 0;
	    cout << n << " = ";
	    bool flag = false;
	    if(n < 0){
	    	n *= (-1);
	    	flag = true;
	    	cout << -1;
	    }
	    primeChecker(n, flag);
	    cout << endl;
    }
    return 0;
} 
/*
Webster defines prime as:
prime (pr¯im) n. [ME, fr. MF, fem. of prin first, L primus; akin to L prior] 1: first in
time: original 2 a: having no factor except itself and one ⟨3 is a ∼ number⟩ b : having
no common factor except one ⟨12 and 25 are relatively ∼⟩ 3 a: first in rank, authority or
significance: principal b: having the highest quality or value ⟨∼ television time ⟩ [from
Webster’s New Collegiate Dictionary]
The most relevant definition for this problem is 2a: An integer g > 1 is said to be prime if and only
if its only positive divisors are itself and one (otherwise it is said to be composite). For example, the
number 21 is composite; the number 23 is prime. Note that the decompositon of a positive number g
into its prime factors, i.e.,
g = f1 × f2 × · · · × fn
is unique if we assert that fi > 1 for all i and fi ≤ fj for i < j.
One interesting class of prime numbers are the so-called Mersenne primes which are of the form
2
p − 1. Euler proved that 2
31 − 1 is prime in 1772 — all without the aid of a computer.
Input
The input will consist of a sequence of numbers. Each line of input will contain one number g in the
range −2
31 < g < 2
31, but different of -1 and 1. The end of input will be indicated by an input line
having a value of zero.
Output
For each line of input, your program should print a line of output consisting of the input number and
its prime factors. For an input number g > 0, g = f1 × f2 × · · · × fn, where each fi
is a prime number
greater than unity (with fi ≤ fj for i < j), the format of the output line should be
g = f1 x f2 x . . . x fn
When g < 0, if | g |= f1 × f2 × · · · × fn, the format of the output line should be
g = -1 x f1 x f2 x . . . x fn
Sample Input
-190
-191
-192
-193
-194
195
196
197
198
199
200
0
Sample Output
-190 = -1 x 2 x 5 x 19
-191 = -1 x 191
-192 = -1 x 2 x 2 x 2 x 2 x 2 x 2 x 3
-193 = -1 x 193
-194 = -1 x 2 x 97
195 = 3 x 5 x 13
196 = 2 x 2 x 7 x 7
197 = 197
198 = 2 x 3 x 3 x 11
199 = 199
200 = 2 x 2 x 2 x 5 x 5
*/