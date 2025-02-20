/*B. Normal Problem
time limit per test1 second
memory limit per test256 megabytes
A string consisting of only characters 'p', 'q', and 'w' is painted on a glass window of a store. Ship walks past the store, standing directly in front of the glass window, and observes string a
. Ship then heads inside the store, looks directly at the same glass window, and observes string b
.

Ship gives you string a
. Your job is to find and output b
.

Input
The first line contains an integer t
 (1≤t≤100
) — the number of test cases.

The only line of each test case contains a string a
 (1≤|a|≤100
) — the string Ship observes from outside the store. It is guaranteed that a
 only contains characters 'p', 'q', and 'w'.

Output
For each test case, output string b
, the string Ship observes from inside the store, on a new line.

Example
InputCopy
5
qwq
ppppp
pppwwwqqq
wqpqwpqwwqp
pqpqpqpq
OutputCopy
pwp
qqqqq
pppwwwqqq
qpwwpqwpqpw
pqpqpqpq

*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string arr[n]; 
   
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    for (int i = 0; i < n; i++) {
        string reversed = "";
        for (int j = arr[i].length() - 1; j >= 0; j--) {
            char ch = arr[i][j];
           
            if (ch == 'p') {
                reversed += 'q';
            } else if (ch == 'q') {
                reversed += 'p';
            } else {
                reversed += ch;
            }
        }
        cout << reversed << endl; 
    }

    return 0;
}