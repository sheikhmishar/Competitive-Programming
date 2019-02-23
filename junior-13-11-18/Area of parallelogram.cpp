#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	for(int i=1; i<=T; i++){
		int Ax, Ay, Bx, By, Cx, Cy, Dx, Dy, area;
		cin >>Ax>> Ay>> Bx>> By>> Cx>> Cy;
		Dx= Cx-Bx+Ax;
		Dy= Cy-By+Ay;
		area = (Ax*By+Bx*Cy+Cx*Dy+Dx*Ay-Ay*Bx-By*Cx-Cy*Dx-Dy*Ax)/2 ;
		if(area<0)
			area *= (-1);
		cout << "Case " << i << ": " << Dx << " " << Dy << " " << area << endl;
	}
	return 0;
}

/*
A parallelogram is a quadrilateral with two pairs of parallel sides. See the picture below:

	D(Dx, Dy) 		C(Cx, Cy)


A(Ax, Ay)			B(Bx, By)

Fig: a parallelogram

Now you are given the co ordinates of A, B and C, you have to find the coordinates of D and the area of the parallelogram. The orientation of ABCD should be same as in the picture.

Input
Input starts with an integer T (≤ 1000), denoting the number of test cases.

Each case starts with a line containing six integers Ax, Ay, Bx, By, Cx, Cy where (Ax, Ay) denotes the coordinate of A, (Bx, By) denotes the coordinate of B and (Cx, Cy) denotes the coordinate of C. Value of any coordinate lies in the range [-1000, 1000]. And you can assume that A, B and C will not be collinear.

Output
For each case, print the case number and three integers where the first two should be the coordinate of D and the third one should be the area of the parallelogram.

Sample Input
3

0 0 10 0 10 10

0 0 10 0 10 -20

-12 -10 21 21 1 40

Sample Output
Case 1: 0 10 100

Case 2: 0 -20 200

Case 3: -32 9 1247
*/