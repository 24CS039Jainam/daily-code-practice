/*Finding roots of quadratic equation*/
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the coefficient of x'2 :-";
    cin>>a;
    cout<<"Enter the coefficient of x :- ";
    cin>>b;
    cout<<"Enter the constant :- ";
    cin>>c;

    int ans1, ans2;
    int D=  sqrt(b*b - (4*a*c));
    ans1 = (-b + D) / (2*a);
    ans2 = (-b - D) / (2*a);
    cout<<ans1<<endl<<ans2;
    return 0;
}