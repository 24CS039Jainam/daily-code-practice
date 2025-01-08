/*N. Fixing the Expression
time limit per test2 seconds
memory limit per test512 megabytes
An expression is a string consisting of three characters, where the first and the last characters are digits (from 0
 to 9
), and the middle character is a comparison symbol (<, = or >).

An expression is true if the comparison symbol matches the digits (for example, if the first digit is strictly less than the last digit, the comparison symbol should be <).

For example, the expressions 1<3, 4>2, 0=0 are true, while 5>5, 7<3 are not.

You are given a string s
, which is an expression. Change as few characters as possible so that s
 becomes a true expression. Note that if s
 is already true, you should leave it as it is.

Input
The first line contains one integer t
 (1≤t≤300
) — the number of test cases.

Each test case consists of one line containing the string s
 (|s|=3
, the first and the last characters of s
 are digits, the second character is a comparison symbol).

Output
For each test case, print a string consisting of 3
 characters — a true expression which can be obtained by changing as few characters as possible in s
. If there are multiple answers, print any of them.

Example

Input
5
3<7
3>7
8=9
0=0
5<3

Output
3<7
8>7
8<9
0=0
0<3

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n],c[n];
    char b[n];
    for(int i=1 ; i<=n ; i++){
        
        cin>>a[i]>>b[i]>>c[i];
        cout<<endl;
    }
    //60 < , 62 > , 61 = 
    for(int i=1 ; i<=n ; i++){
        if(b[i] == '<'){
            if(a[i]<c[i]){
                cout<<a[i]<<b[i]<<c[i]<<endl;
                
            }
            else if(a[i]==c[i]){
                b[i] = '=';
                cout<<a[i]<<b[i]<<c[i]<<endl;
            }
            else if (a[i]>c[i]){
                b[i] = '>';
                cout<<a[i]<<b[i]<<c[i]<<endl;
            } 
        }
        else if(b[i] == '>'){
            
            if(a[i]>c[i]){
                cout<<a[i]<<b[i]<<c[i]<<endl;
            }
            else if(a[i]==c[i]){
                b[i] = '=';
                cout<<a[i]<<b[i]<<c[i]<<endl;
            }
            else if(a[i] < c[i]){
                b[i] = '<';
                cout<<a[i]<<b[i]<<c[i]<<endl;
            }
            
            
        }

        else if(b[i] == '='){
            
            if(a[i]>c[i]){
                b[i] = '>';
                cout<<a[i]<<b[i]<<c[i]<<endl;
            }
            else if(a[i]==c[i]){
                
                cout<<a[i]<<b[i]<<c[i]<<endl;
            }
            else if(a[i] < c[i]){
                b[i] = '<';
                cout<<a[i]<<b[i]<<c[i]<<endl;
            }
            
            }
        

}
return 0;
}