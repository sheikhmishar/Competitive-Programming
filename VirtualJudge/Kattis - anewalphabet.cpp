
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; //tolower
    getline(cin , s);
    transform(s.begin(), s.end(), s.begin(), ::tolower); 
    string array[123];
    array['a']="@";
    array['b']="8";
    array['c']="(";
    array['d']="|)";
    array['e']="3";
    array['f']="#";
    array['g']="6";
    array['h']="[-]";
    array['i']="|";
    array['j']="_|";
    array['k']="|<";
    array['l']="1";
    array['m']="[]\\/[]";
    array['n']="[]\\[]";
    array['o']="0";
    array['p']="|D";
    array['q']="(,)";
    array['r']="|Z";
    array['s']="$";
    array['t']="']['";
    array['u']="|_|";
    array['v']="\\/";
    array['w']="\\/\\/";
    array['x']="}{";
    array['y']="`/";
    array['z']="2";
    for(int count = 0; count < s.size(); count++){
        if(s.at(count) >= 'a' && s.at(count) <= 'z')
            cout << array[s.at(count)];
        else
            cout << s.at(count);
    }
    return 0;
}


/*
A New Alphabet has been developed for Internet communications. While the glyphs of the new alphabet don’t necessarily improve communications in any meaningful way, they certainly make us feel cooler.

You are tasked with creating a translation program to speed up the switch to our more elite New Alphabet by automatically translating ASCII plaintext symbols to our new symbol set.

The new alphabet is a one-to-many translation (one character of the English alphabet translates to anywhere between 1 and 6 other characters), with each character translation as follows:

Original

New

English Description

Original

New

English Description

a

@

at symbol

n

[]\[]

brackets, backslash, brackets

b

8

digit eight

o

0

digit zero

c

(

open parenthesis

p

|D

bar, capital D

d

|)

bar, close parenthesis

q

(,)

parenthesis, comma, parenthesis

e

3

digit three

r

|Z

bar, capital Z

f

#

number sign (hash)

s

$

dollar sign

g

6

digit six

t

']['

quote, brackets, quote

h

[-]

bracket, hyphen, bracket

u

|_|

bar, underscore, bar

i

|

bar

v

\/

backslash, forward slash

j

_|

underscore, bar

w

\/\/

four slashes

k

|<

bar, less than

x

}{

curly braces

l

1

digit one

y

`/

backtick, forward slash

m

[]\/[]

brackets, slashes, brackets

z

2

digit two

For instance, translating the string “Hello World!” would result in:

[-]3110 \/\/0|Z1|)!
Note that uppercase and lowercase letters are both converted, and any other characters remain the same (the exclamation point and space in this example).

Input
Input contains one line of text, terminated by a newline. The text may contain any characters in the ASCII range 32–126 (space through tilde), as well as 9 (tab). Only characters listed in the above table (A–Z, a–z) should be translated; any non-alphabet characters should be printed (and not modified). Input has at most 10000 characters.

Output
Output the input text with each letter (lowercase and uppercase) translated into its New Alphabet counterpart.

Sample Input 1	Sample Output 1
All your base are belong to us.
@11 `/0|_||Z [email protected]$3 @|Z3 8310[]\[]6 ']['0 |_|$.
Sample Input 2	Sample Output 2
What's the Frequency, Kenneth?
\/\/[-]@'][''$ ']['[-]3 #|Z3(,)|_|3[]\[](`/, |<3[]\[][]\[]3']['[-]?
Sample Input 3	Sample Output 3
A new alphabet!
@ []\[]3\/\/ @1|D[-]@83']['!

*/