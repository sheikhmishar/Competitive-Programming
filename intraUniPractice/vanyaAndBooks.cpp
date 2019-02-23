#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin >> n;
	long long copyOfN = n, limit = 9, result = 0;
	while(copyOfN > 0){
		result += copyOfN;
		copyOfN -= limit;
		limit *= 10;
	}
	cout << n <<" "<< result;
	return 0;
}
/*
Vanya got an important task — he should enumerate books in the library and label each book with its number. Each of the n books should be assigned with a number from 1 to n. Naturally, distinct books should be assigned distinct numbers.

Vanya wants to know how many digits he will have to write down as he labels the books.

Input
The first line contains integer n (1 ≤ n ≤ 109) — the number of books in the library.

Output
Print the number of digits needed to number all the books.

Examples
Input
13
Output
17
Input
4
Output
4
Note
Note to the first test. The books get numbers 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, which totals to 17 digits.

Note to the second sample. The books get numbers 1, 2, 3, 4, which totals to 4 digits.
*/