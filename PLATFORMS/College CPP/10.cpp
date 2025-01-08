/*
Check if number is a Perfect Number (sum of divisors equals the num)
A Perfect Number is a positive integer that is equal to the sum of its proper 
divisors, excluding itself
Test Cases:
6:
Divisors (excluding 6): 1,2,3
Sum: 1+2+3 = 6 (Perfect Number)
28:
Divisors (excluding 28): 1,2,4, 7, 14
Sum: 1+2+4+&+14 = 28 (Perfect Number)
12:
Divisors (excluding 6): 1,2,3,4,6
Sum: 1+2+3+4+6 = 12 (Not a Perfect Number)
1 -
496:
Divisors (excluding 6): 1,2,4,8,16,31,62,124,248
Sum: 1+2+4+8+16+31+62+124+248 = 496 (Perfect Number)*/

#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cin>>n;
    for(int i=1 ; i<n-1 ; i++){
        if(n%i==0){
            sum += i;
        }
    }
    if(sum == n){
        cout<<"PERFECT NUMBER"<<endl;
    }
    else{
        cout<<"NOT A PERFECT NUMBER"<<endl;
    }
    return 0;
}