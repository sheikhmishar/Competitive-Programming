
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    vector <int> minutes;
    vector <char> prob;
    vector <string> RW;
    int m;
    char p;
    string r;
    cin >> m;
    while(m != (-1)){
        cin >> p >> r;
        minutes.push_back(m);
        prob.push_back(p);
        RW.push_back(r);
        cin >> m;
    }
    int size = prob.size();
    // reinitializing all answers to wrong after correct answer of same problem
    for(int count = 0; count < size; count++){
        if(RW[count] == "right"){
            for(int inner = count + 1; inner < size; inner++){
                if(prob[count] == prob[inner] && RW[inner] == "right"){
                    RW[inner] = "wrong";
                }
            }
        }
    }
    // counting penalty
    int penalty = 0;
    int rightCount = 0;
    for(int count = 0; count < size; count++){
        if(RW[count] == "right"){
            rightCount++;
            penalty += minutes[count];
            for(int inner = 0; inner < count; inner++){
                if (RW[inner] == "wrong" && prob[inner] == prob[count]){
                    penalty += 20;
                }
            }
        }
    }
    cout << rightCount << " " << penalty << endl;
    return 0;
}


/*
Our new contest submission system keeps a chronological log of all submissions made by each team during the contest. With each entry, it records the number of minutes into the competition at which the submission was received, the letter that identifies the relevant contest problem, and the result of testing the submission (designated for the sake of this problem simply as right or wrong). As an example, the following is a hypothetical log for a particular team:

3 E right
10 A wrong
30 C wrong
50 B wrong
100 A wrong
200 A right
250 C wrong
300 D right
The rank of a team relative to others is determined by a primary and secondary scoring measure calculated from the submission data. The primary measure is the number of problems that were solved. The secondary measure is based on a combination of time and penalties. Specifically, a team�s time score is equal to the sum of those submission times that resulted in right answers, plus a 20-minute penalty for each wrong submission of a problem that is ultimately solved. If no problems are solved, the time measure is 0.

In the above example, we see that this team successfully completed three problems: E on their first attempt (3 minutes into the contest); A on their third attempt at that problem (200 minutes into the contest); and D on their first attempt at that problem (300 minutes into the contest). This team�s time score (including penalties) is 543. This is computed to include 3 minutes for solving E, 200 minutes for solving A with an additional 40 penalty minutes for two earlier mistakes on that problem, and finally 300 minutes for solving D. Note that the team also attempted problems B and C, but were never successful in solving those problems, and thus received no penalties for those attempts.

According to contest rules, after a team solves a particular problem, any further submissions of the same problem are ignored (and thus omitted from the log). Because times are discretized to whole minutes, there may be more than one submission showing the same number of minutes. In particular there could be more than one submission of the same problem in the same minute, but they are chronological, so only the last entry could possibly be correct. As a second example, consider the following submission log:

7 H right
15 B wrong
30 E wrong
35 E right
80 B wrong
80 B right
100 D wrong
100 C wrong
300 C right
300 D wrong
This team solved 4 problems, and their total time score (including penalties) is 502, with 7 minutes for H, 35+20 for E, 80+40 for B, and 300+20 for C.

Input
The input contains n lines for 0?n?100, with each line describing a particular log entry. A log entry has three parts: an integer m, with 1?m?300, designating the number of minutes at which a submission was received, an uppercase letter designating the problem, and either the word right or wrong. The integers will be in nondecreasing order and may contain repeats. After all the log entries is a line containing just the number ?1.

Output
Output two integers on a single line: the number of problems solved and the total time measure (including penalties).

Sample Input 1	Sample Output 1
3 E right
10 A wrong
30 C wrong
50 B wrong
100 A wrong
200 A right
250 C wrong
300 D right
-1
3 543
Sample Input 2	Sample Output 2
7 H right
15 B wrong
30 E wrong
35 E right
80 B wrong
80 B right
100 D wrong
100 C wrong
300 C right
300 D wrong
-1
4 502
*/