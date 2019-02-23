#include <cstdio>
#include <cstring>
using namespace std;

int stm(char monthS[]) {
	if (strcmp(monthS, "January") == 0)
		return 1;
	if (strcmp(monthS, "February") == 0)
		return 2;
	if (strcmp(monthS, "March") == 0)
		return 3;
	if (strcmp(monthS, "April") == 0)
		return 4;
	if (strcmp(monthS, "May") == 0)
		return 5;
	if (strcmp(monthS, "June") == 0)
		return 6;
	if (strcmp(monthS, "July") == 0)
		return 7;
	if (strcmp(monthS, "August") == 0)
		return 8;
	if (strcmp(monthS, "September") == 0)
		return 9;
	if (strcmp(monthS, "October") == 0)
		return 10;
	if (strcmp(monthS, "November") == 0)
		return 11;
	if (strcmp(monthS, "December") == 0)
		return 12;
	return -1;
}

int main() {
	int tc, count = 1, ans;
	scanf("%d", &tc);

	int mS, dS, yS, mE, dE, yE;
	char mStr[20];

	while (tc-- > 0) {
		scanf("%s %d, %d", mStr, &dS, &yS);
		mS = stm(mStr);

		scanf("%s %d, %d", mStr, &dE, &yE);
		mE = stm(mStr);

		if (mS > 2)
			yS++;
		if (mE < 2 || (mE == 2 && dE < 29))
			yE--;

		ans = yE / 4 - (yS - 1) / 4;
		ans -= yE / 100 - (yS - 1) / 100;
		ans += yE / 400 - (yS - 1) / 400;

		printf("Case %d: %d\n", count++, ans);
	}

	return 0;
}

/*
It is 2012, and it's a leap year. So there is a "February 29" in this year, which is called leap day. Interesting thing is the infant who will born in this February 29, will get his/her birthday again in 2016, which is another leap year. So February 29 only exists in leap years. Does leap year comes in every 4 years? Years that are divisible by 4 are leap years, but years that are divisible by 100 are not leap years, unless they are divisible by 400 in which case they are leap years.

In this problem, you will be given two different date. You have to find the number of leap days in between them.

Input
Input starts with an integer T (≤ 550), denoting the number of test cases.

Each of the test cases will have two lines. First line represents the first date and second line represents the second date. Note that, the second date will not represent a date which arrives earlier than the first date. The dates will be in this format - "month day, year", See sample input for exact format. You are guaranteed that dates will be valid and the year will be in between 2 * 103 to 2 * 109. For your convenience, the month list and the number of days per months are given below. You can assume that all the given dates will be a valid date.

Output
For each case, print the case number and the number of leap days in between two given dates (inclusive).

Sample Input
4

January 12, 2012

March 19, 2012

August 12, 2899

August 12, 2901

August 12, 2000

August 12, 2005

February 29, 2004

February 29, 2012

Sample Output
Case 1: 1

Case 2: 0

Case 3: 1

Case 4: 3

Note
The names of the months are {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November" and "December"}. And the numbers of days for the months are {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 and 31} respectively in a non-leap year. In a leap year, number of days for February is 29 days; others are same as shown in previous line.
*/