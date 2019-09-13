
#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    int copy = N;
    while (N--) {
        int G;
        cin >> G;
        long long int arr[G] ={0};
        int arrCount[G] = {0};
        long long int result =0;
        for(int count = 0; count < G; count++) {
            cin >> arr[count];
        }
        
        for (int count = 0; count < G; count++) {
            for (int inner = 0; inner < G; inner++) {
                if (arr[count] == arr[inner]) {
                    arrCount[count]++;
                }
            } 
        }
        for(int count = 0; count < G; count++){
            if(arrCount[count]==1)
                result = arr[count];
        }
        cout << "Case #" << (copy - N) << ": " << result << endl;
    }
    return 0;
}


/*
You are hosting a party with G guests and notice that there is an odd number of guests! When planning the party you deliberately invited only couples and gave each couple a unique number C on their invitation. You would like to single out whoever came alone by asking all of the guests for their invitation numbers.

Input
The first line of input gives the number of cases, N. N test cases follow. For each test case there will be:

One line containing the value G the number of guests.

One line containing a space-separated list of G integers. Each integer C indicates the invitation code of a guest.

You may assume that 1?N?50,0<C<231,3?G<1000.

Output
For each test case, output one line containing “Case #x: ” followed by the number C of the guest who is alone.

Sample Input 1	Sample Output 1
3
3
1 2147483647 2147483647
5
3 4 7 4 3
5
2 10 2 10 5
Case #1: 1
Case #2: 7
Case #3: 5
*/