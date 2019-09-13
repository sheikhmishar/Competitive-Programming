#include <bits/stdc++.h>
using namespace std;
long long gcdFinder(long long a, long long b){
	if(b%a==0)
		return a;
	return gcdFinder(b%a, a);
}
int main() {
	int T;
	cin >> T;
	for(int i = 1; i<=T; i++){
		int e;
		cin >> e;
		//actual value before ^(-1)*e
		long long numerator = 0, denominator = 1;
		int size = e;
		while(e--){
			int tmp;
			cin >> tmp;
			numerator = numerator * tmp + denominator * 1; //as x^(-1)/1 always gives num value of 1; the general formula is num = prevNum * newDen + prevDev * newNum & den = prevDen * newDen
			denominator *= tmp; // as tmp is the newDen iaw we are taking input of new denominators
		}
		//now its time to reverse it and multiply with e
		long long temp = numerator;
		numerator = denominator * size;
		denominator = temp;
		long long gcdOfNumDen = gcdFinder(numerator, denominator);
		numerator /= gcdOfNumDen;
		denominator /= gcdOfNumDen;
		cout << "Case " << i << ": " << numerator << "/" << denominator << endl;
	}
	return 0;
}

/*
The harmonic mean (HN ) of N numbers a1, a2, a3 . . . aN−1, aN
is defined as below:
HN = N / (1/a1 + 1/a2 + .... + 1/aN−1 + 1/aN)
So the harmonic mean of four numbers a, b, c, d is defined
as
H4 = 4/ (1/a + 1/b + 1/c + 1/d)
In this problem your job is very simple: given N (0 < N <
9) integers you will have to find their harmonic mean.
Input
The first line of the input file contains an integer S (0 < S < 501), which indicates how many sets of
inputs are there. Each of the next S lines contains one set of input. The description of each set is given
below:
Each set starts with an integer N (0 < N < 9), which indicates how many numbers are there in
this set. This number is followed by N integers a1, a2, a3 . . . aN−1, aN (0 < ai < 101).
Output
For each set of input produce one line of output. This line contains the serial of output followed by two
integers m and n separated by a front slash. These two numbers actually indicate that the harmonic
mean of the given four numbers is m
n
. You must ensure that gcd(m, n) = 1 or in other words m and n
must be relative prime. The value of m and n will fit into a 64-bit signed integer.
Sample Input
2
4 1 2 3 4
4 2 2 3 1
Sample Output
Case 1: 48/25
Case 2: 12/7
*/