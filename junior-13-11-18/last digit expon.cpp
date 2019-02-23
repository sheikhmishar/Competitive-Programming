#include <bits/stdc++.h>

using namespace std;

long long power(long long number, long long pow, long long mod){
    long long result = 1;
    if(pow == 0)
        return 1%mod;
    if(pow == 1)
        return number%mod;
    else if(pow & 1){
        result = power(number, pow/2, mod) % mod;
        result = (result * result * number) %mod;
    }
    else{
        result = power(number, pow/2, mod) %mod;
        result = (result * result) %mod;
    }
        return result;
}

int main()
{
	int T;
    long long number, pow;
    cin >> T;
    while(T--){
	    cin >> number >> pow;
	    cout << power(number,pow, 10) << endl;
    }
    return 0;
}
/*
	alternate solution
	

	#include <bits/stdc++.h>

	using namespace std;

	int main()
	{
		int T, p;
		long long q;
		cin >> T;
		while(T--){
			cin >> p >> q;
			if(q == 0){
				cout << 1 << endl;
				continue;
			}
			int lastDig = p%10;
			if(q == 1){
				cout << lastDig << endl;
				continue;
			}
			if(lastDig==0 || lastDig == 1 || lastDig == 5 || lastDig == 6){
				cout << lastDig << endl;
				continue;
			}
			int powerMod4 = q%4;
			if(powerMod4 == 1){
				cout << p%10 << endl;
				continue;
			}
			if(powerMod4 == 2){
				cout << (p*p)%10 << endl;
				continue;
			}
			if(powerMod4 == 3){
				cout << (p*p*p)%10 << endl;
				continue;
			}
			if(powerMod4 == 0){
				cout << (p*p*p*p)%10 << endl;
				continue;
			}
		}
		return 0;
	}
*/

/*

Nestor was doing the work of his math class about three days but he is tired of make operations a lot and he should deliver his task tomorrow. His math’s teacher gives him two numbers a and b. The problem consist of finding the last digit of the potency of base a and index b. Help Nestor with his problem. You are given two integer numbers: the base a (0 <= a <= 20) and the index b (0 <= b <= 2,147,483,000), a and b both are not 0. You have to find the last digit of ab.

Input
The first line of input contains an integer t, the number of test cases (t <= 30). t test cases follow. For each test case will appear a and b separated by space.

Output
For each test case output an integer per line representing the result.

Example
Input:
2
3 10
6 2

Output:
9
6
*/