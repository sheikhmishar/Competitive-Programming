#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, pagla, result = 0;
    cin >> n;
    int a[100]={0};
    for(int count = 0; count <= (n-1); count++){
        cin >> pagla;
        a[pagla]++;
    }
    for(int count = 0;count <= (n-2);count++){
        if(a[count]+a[count+1]> result){
            result = a[count]+a[count+1];
        }
    }
    cout << result;
    return 0;
}