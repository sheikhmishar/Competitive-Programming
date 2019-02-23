#include <bits/stdc++.h>
#include <bitset>
using namespace std;
const int limit = 100000001;
bitset<limit> primeArray;
void primeGenerator() {
    primeArray[0] = true;
    primeArray[1] = true;
    for (long long i = 3; i * i < limit; i += 2) {
        if (!primeArray[i]) {
            for (long long j = i * i; j < limit; j += 2 * i) {
                primeArray[j] = true;
            }
        }
    }
}

void location(int N) {
    int count = 1, sum = -1, result = 0;
    while(true){
        sum+= count;
        if(sum >= N){
            result = (count - (sum - N));
            break;
        }
        count++;
    }
    cout << count << " " << result << endl;
}
int locationFinder(int N){
    int pos = 0;
    for(int i = 3; i < limit; i += 2){
        if (!primeArray[i]) {
            pos++;
            if(i == N){
                return pos;
            }
        }
    }
}

int main() {
    primeGenerator();
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int N ;
        cin >> N;
        if (N == 2) {
            cout << "1 1" << endl;
        } else if (N % 2 == 0 || N == 1 || primeArray[N]) {
            cout << "-1" << endl;
        }  else {
            location(locationFinder(N));
        }
    }
}