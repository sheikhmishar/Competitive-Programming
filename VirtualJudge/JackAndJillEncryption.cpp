
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    while (N--) {

        string s;
        cin >> s;
        //int size = s.size();
        int rem;
        for (int count = 1; count < s.size() + 999999; count++) {
            if (count * count >= s.size()) {
                rem = count;
                break;
            }
        }
        char p[rem][rem];
        //initializing to *
        for (int i = 0; i < rem; ++i) {
            for (int j = 0; j < rem; ++j) {
                p[i][j] = '*';
            }
        }
        //putting input
        int loc = 0;
        for (int i = 0; i < rem; ++i) {
            for (int j = 0; j < rem; ++j) {
                if (loc == s.size())
                    break;
                p[i][j] = s[loc++];

            }
        }
        //new
        char notun[rem][rem];
        loc = 0;
        for (int i = 0; i < rem; ++i) {
            for (int j = 0; j < rem; ++j) {
                notun[i][j] = p[rem - j - 1][i];
            }
        }
        for (int i = 0; i < rem; ++i) {
            for (int j = 0; j < rem; ++j) {
                if (notun[i][j] != '*')
                    cout << notun[i][j];
            }
        }
        cout << endl;
    }

    return 0;
}


/*
Jack and Jill developed a special encryption method, so they can enjoy conversations without worrrying about eavesdroppers. Here is how: let L be the length of the original message, and M be the smallest square number greater than or equal to L. Add (M?L) asterisks to the message, giving a padded message with length M. Use the padded message to fill a table of size K×K, where K2=M. Fill the table in row-major order (top to bottom row, left to right column in each row). Rotate the table 90 degrees clockwise. The encrypted message comes from reading the message in row-major order from the rotated table, omitting any asterisks.

For example, given the original message ‘iloveyouJack’, the message length is L=12. Thus the padded message is ‘iloveyouJack****’, with length M=16. Below are the two tables before and after rotation.

ilov
eyou
Jack
****
*Jei
*ayl
*coo
*kuv

Then we read the secret message as ‘Jeiaylcookuv’.

Input
The first line of input is the number of original messages, 1?N?100. The following N lines each have a message to encrypt. Each message contains only characters a–z (lower and upper case), and has length 1?L?10000.

Output
For each original message, output the secret message.

Sample Input 1	Sample Output 1
2
iloveyoutooJill
TheContestisOver
iteiloylloooJuv
OsoTvtnheiterseC
*/