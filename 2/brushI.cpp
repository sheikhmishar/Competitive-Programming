#include <iostream>
using namespace std;

int main() {
	int T;
	unsigned long long int sum;
	cin >> T;
	for(int test = 1; test <= T; test++){
		int i;
		cin >> i;
		sum=0;
		for(int count = 1; count <= i; count++){
			int dust;
			cin >> dust;
			if(dust >= 0){
				sum += dust;
			}
		}
		cout << "Case " << test << ": " << sum << endl;
	}
	return 0;
}
/*
Sometimes I feel angry to arrange contests, because I am too lazy. Today I am arranging a contest for AIUB students. So, I made a plan. While they will be busy with the contest, as a punishment I will cover their rooms with dusts. So, when they will be back, they will surely get angry, and it will cause them some pain.

So, at first, I will make up my mind, that means I will fix the amount of dusts for each student. This amount may not be same for all. Now you are given the amount of dust unit for each student. You have to help me finding the total dust unit I have to collect to cause them pain.

But there is a problem, my random function which generates dust units for students has a bug, it sometimes returns negative numbers. If a student gets negative number, I think he is lucky, so I will not cause him any pain with dusts.

Input
Input starts with an integer T (≤ 100), denoting the number of test cases.

Each case starts with a blank line. The next line contains an integer N (1 ≤ N ≤ 1000), means that there are N students. The next line will contain N integers separated by spaces which denote the dust unit for all students. The dust unit for any student will not contain more than two digits.

Output
For each case print the case number and the total required dust units.

Sample Input
2

 

3

1 5 10

 

2

1 99

Sample Output
Case 1: 16

Case 2: 100
*/