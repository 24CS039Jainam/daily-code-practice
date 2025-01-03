/*if and else are two of the most frequently used conditionals in C/C++, and they enable you to execute zero or one conditional statement among many such dependent conditional statements. We use them in the following ways:

if: This executes the body of bracketed code starting with  if  evaluates to true.

if (condition) {
    statement1;
    ...
}
if - else: This executes the body of bracketed code starting with  if  evaluates to true, or it executes the body of code starting with  if  evaluates to false. Note that only one of the bracketed code sections will ever be executed.

if (condition) {
    statement1;
    ...
}
else {
    statement2;
    ...
}
if - else if - else: In this structure, dependent statements are chained together and the  for each statement is only checked if all prior conditions in the chain evaluated to false. Once a  evaluates to true, the bracketed code associated with that statement is executed and the program then skips to the end of the chain of statements and continues executing. If each  in the chain evaluates to false, then the body of bracketed code in the else block at the end is executed.

if(first condition) {
    ...
}
else if(second condition) {
    ...
}
.
.
.
else if((n-1)'th condition) {
    ....
}
else {
    ...
}
Given a positive integer , do the following:

If , print the lowercase English word corresponding to the number (e.g., one for , two for , etc.).
If , print Greater than 9.
Input Format

A single integer, .

Constraints

Output Format

If , then print the lowercase English word corresponding to the number (e.g., one for , two for , etc.); otherwise, print Greater than 9.

Sample Input 0

5
Sample Output 0

five
Explanation 0

five is the English word for the number .

Sample Input 1

8
Sample Output 1

eight
Explanation 1

eight is the English word for the number .

Sample Input 2

44
Sample Output 2

Greater than 9
Explanation 2

 is greater than , so we print Greater than 9.*/
#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    
    
    if(num==1){
        cout<<"one";
    }
    else if(num==2){
        cout<<"two";
    }
    else if(num==3){
        cout<<"three";
    }
    else if(num==4){
        cout<<"four";
    }
    else if(num==5){
        cout<<"five";
    }
    else if(num==6){
        cout<<"six";
    }
    else if(num==7){
        cout<<"seven";
    }
    else if(num==8){
        cout<<"eight";
    }
    else if(num==9){
        cout<<"nine";
    }
    else{
        cout<<"Greater than 9";
    }
    
}
