#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int count = 1; count <= T; count++){
        unsigned long long L, R;
        cin >> L >> R;
        unsigned long long result = 0;

        for(unsigned long long count = L; count <= R; count++ ){
            int divisor = 0;
            for(unsigned long long innerCount = 1; innerCount <= count; innerCount+=2){
                if(count%innerCount == 0)
                    divisor++;
            }
            if(divisor%2 != 0)
                result ++;
        }
        cout << "Case " << count << ": " << result << endl;
    }
    return 0;
}
