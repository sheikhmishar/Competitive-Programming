#include <iostream>
using namespace std;

int main() {
	int N, length, width, height;
	cin >> N;
	for(int count = 1; count <= N; count++){
		cin >> length >> width >> height;
		string result = "bad";
		if(length <= 20 && width <= 20 && height <= 20){
			result = "good";
		}
		cout << "Case " << count << ": " << result << endl;
	}
	return 0;
}
/*
Mr. Bean used to have a lot of problems packing
his suitcase for holiday. So he is very careful for
this coming holiday. He is more serious this time
because he is going to meet his ance and he is
also keeping frequent communication with you
as a programmer friend to have suggestions. He
gets confused when he buys a gift box for his
ance because he can't decide whether it will t
in his suitcase or not. Sometimes a box doesn't
t in his suitcase in one orientation and after
rotating the box to a different orientation it ts
in the suitcase. This type of behavior makes him
puzzled.
So to make things much simpler he bought another suitcase having same length, width and height,
which is 20 inches. This measurement is taken from inside of the box. So a box which has length,
width and height of 20 inches will just t in this suitcase. He also decided to buy only rectangular
shaped boxes and keep a measuring tape in his pocket. Whenever he chooses one gift box, which must
be rectangular shaped, he quickly measures the length, width and height of the box. But still he can't
decide whether it will t in his suitcase or not. Now he needs your help. Please write a program for
him which calculates whether a rectangular box ts in his suitcase or not provided the length, width
and height of the box. Note that, sides of the box must be parallel to the sides of the suitcase.
Input
Input starts with an integer T (T  100), which indicates the number of test cases.
Each of the next T line contains three integers L, W and H (1  L;W;H  50) denoting the length,
width and height of a rectangular shaped box.
Output
For each test case, output a single line. If the box ts in the suitcase in any orientation having the
sides of the box is parallel to the sides of the suitcase, this line will be `Case #: good', otherwise it
will be `Case #: bad'. In your output # will be replaced by the case number.
Please see the sample input and sample output for exact format.
Sample Input
2
20 20 20
1 2 21
Sample Output
Case 1: good
Case 2: bad
*/