#include<iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t , n , k , i = 1;
	cin>>t;
	while(i <= t){
		cin>>n>>k;
		int sum = 0 , val;
		for(int j = 0; j< n; j++){
			cin>>val;
			sum+=val;
		}
		n++;
		k = (k*n)-sum;
		cout<<"Case "<<i<<": "<<k<<endl<<endl;
		i++;
	}


	return 0;
}

/*
The marks distribution in Amazing International University-Bangladesh is very strange. There are lots of quizzes in a semester. The average of all the quizzes is considered as the final mark. Unlike Tom Cruise, his friend Ananta Jalil thinks it is very easy to get specific average marks in this system. So Ananta made a bet with Tom that he can get exactly K average marks in a semester.

After N quizzes there is only one quiz left and Ananta wants to know the minimum number he needs in the last quiz to get exactly K average marks (Integer division) in this semester. Now as a friend of Ananta Jalil you got to help him to win this bet. It is guaranteed that Ananta will need some positive number in the last quiz to get K final marks.

Input
Input starts with an integer T (≤ 100), denoting the number of test cases. Each of the test cases consists of two lines. First line contains two integers N (1≤N≤10) and K (1≤K≤100). The second line contains N integers ai (0≤ai≤100) describing the numbers Ananta already got from the previous N quizzes.

Output
For each case print the case number and the minimum number Ananta needs in the last quiz to get exactly K average marks. It is guaranteed that the valid output of the input set will always be positive and ≤100.

Example
Input:
2

4 50

40 70 35 45

3 20

25 15 20

Output:
Case 1: 60

Case 2: 20
*/