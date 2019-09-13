#include <bits/stdc++.h> 
using namespace std;
void primeChecker(long long n) {
    bool flag = false;
    while (n % 2 == 0) {
        if(!flag){
        	cout << "    " << 2;
        	flag = true;
        }
        else{
        	cout << "\n    " << 2;
        }
        n = n / 2;
    }
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
        	if(!flag){
            	cout << "    " << i;
            	flag = true;
        	}
        	else{
        		cout << "\n    " << i;
        	}
            n = n / i;
        }
    }
    if (n > 2){
    	if(!flag){
            	cout << "    " << n;
            	flag = true;
       	}
       	else{
        	cout << "\n    " << n;
        }
    }
    cout << "\n";
}

int main() {
    long long n;
    while(true){
        cin >> n;
        if(n == -1)
            return 0;
        primeChecker(n);
        cout << "\n";
    }
    return 0;
} 
/*
One of the central ideas behind much cryptography is that factoring large numbers is computationally
intensive. In this context one might use a 100 digit number that was a product of two 50 digit prime
numbers. Even with the fastest projected computers this factorization will take hundreds of years.
You don’t have those computers available, but if you are clever you can still factor fairly large
numbers.
Input
The input will be a sequence of integer values, one per line, terminated by a negative number. The
numbers will fit in gcc’s long long int datatype, however scanf and printf do not appear to handle
this datatype correctly, so you must do your own I/O conversion.
Output
Each positive number from the input must be factored and all factors (other than 1) printed out. The
factors must be printed in ascending order with 4 leading spaces preceding a left justified number, and
followed by a single blank line.
Sample Input
90
1234567891
18991325453139
12745267386521023
-1
Sample Output
2
3
3
5
1234567891
3
3
13
179
271
1381
2423
30971
411522630413
*/