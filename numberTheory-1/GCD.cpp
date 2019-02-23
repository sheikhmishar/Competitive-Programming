#include <bits/stdc++.h> 
using namespace std;
int GCD(int a, int b){
	return b == 0 ? a : GCD(b, a % b);
}

int main() {
    int N;
    while(true){
        cin >> N;
        if(N == 0)
            return 0;
        long long G=0;
		for(int i=1;i<N;i++){
			for(int j=i+1;j<=N;j++){
				G+=GCD(i,j);
			}
    	}
    	cout << G << endl;
    }
    return 0;
} 
/*
Given the value of N, you will have to find the value of G. The definition of G is given below:
G =
i<N
∑
i=1
j
∑
≤N
j=i+1
GCD(i, j)
Here GCD(i, j) means the greatest common divisor of integer i and integer j.
For those who have trouble understanding summation notation, the meaning of G is given in the
following code:
G=0;
for(i=1;i<N;i++)
for(j=i+1;j<=N;j++)
{
G+=GCD(i,j);
}
//Here GCD() is a function that finds the greatest common divisor of the two input numbers 
Input
The input file contains at most 100 lines of inputs. Each line contains an integer N (1 < N < 501).
The meaning of N is given in the problem statement. Input is terminated by a line containing a single
zero. This zero should not be processed.
Output
For each line of input produce one line of output. This line contains the value of G for corresponding
N.
Sample Input
10
100
500
0
Sample Output
67
13015
442011
*/