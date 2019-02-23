#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for(int count = 1; count <= T; count++){
        int r,c, poss = 0;
        cin >> r >> c;
        if((r+2)<9 && (c+1)<9 ) poss++;
        if((r+1)<9 && (c+2)<9 ) poss++;
        if((r-1)>0 && (c+2)<9 ) poss++;
        if((r-2)>0 && (c+1)<9 ) poss++;
        if((r-2)>0 && (c-1)>0 ) poss++;
        if((r-1)>0 && (c-2)>0 ) poss++;
        if((r+1)<9 && (c-2)>0 ) poss++;
        if((r+2)<9 && (c-1)>0 ) poss++;
        cout << "Case " << count << ": " << poss<< endl;
    }
    return 0;
}
