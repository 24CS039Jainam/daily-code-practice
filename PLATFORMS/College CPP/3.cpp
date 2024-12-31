#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int digit=0, num1, num2, num3=0;
    int orgnum;

    cin >> num1;
    orgnum = num1;

    
    while (num1 > 0) {
        digit++;
        num1 /= 10;
    }

    num1 = orgnum;

    
    for (; num1 > 0 ;) {
        num2 = num1 % 10;         
        num1 = num1 / 10;         
        num3 += pow(num2, digit); 
    }

    if (num3 == orgnum) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
