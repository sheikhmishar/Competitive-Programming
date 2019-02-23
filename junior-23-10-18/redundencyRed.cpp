
#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int R;
        cin >> R;
        string myArray[R];
        for(int count = 0; count < R; count++){
            string tmp;
            cin >> tmp;
            myArray[count] = tmp;
        }
        int result = 1;
        for(int count = 1; count < R; count++){
            int boolVal = 1;
            for(int inner = 0; inner < count; inner++){
                if(myArray[inner] == myArray[count]){
                    boolVal = 0;
                    break;
                }
            }
            if(boolVal == 1)
                result++;
        }
        cout << result << endl;
    }
            
    return 0;
}

/*
Alice travels a lot for her work. Each time she travels, she visits a single city before returning home.
Someone recently asked her �how many different cities have you visited for work?� Thankfully Alice has kept a log of her trips. Help Alice figure out the number of cities she has visited at least once.

Input
The first line of input contains a single positive integer T?50 indicating the number of test cases. The first line of each test case also contains a single positive integer n indicating the number of work trips Alice has taken so far. The following n lines describe these trips. The ith such line simply contains the name of the city Alice visited on her ith trip.

Alice�s work only sends her to cities with simple names: city names only contain lowercase letters, have at least one letter, and do not contain spaces.

The number of trips is at most 100 and no city name contains more than 20 characters.

Output
For each test case, simply output a single line containing a single integer that is the number of distinct cities that Alice has visited on her work trips.

Sample Input 1	Sample Output 1
2
7
saskatoon
toronto
winnipeg
toronto
vancouver
saskatoon
toronto
3
edmonton
edmonton
edmonton
4
1
*/