#include<iostream>
#include<iomanip>  // For setprecision, fixed, and scientific
using namespace std;

int main(){
    double e = 14049.304930000;  // Example with trailing zeros in memory
    
    cout << fixed << setprecision(5) << e << endl;  // This prints the number in fixed-point notation with 5 decimal places
    cout<<"Thank You...."<<endl;
    return 0;
}
