#include<iostream>
using namespace std;

int main(){
    int n,m,a;
    cout<<"Enter n :- ";
    cin>>n;
    cout<<"Enter m :- ";
    cin>>m;
    cout<<"Enter a :- ";
    cin>>a;
    int larger_area=n*m;
    int smaller_area=a*a;
    for(int i=1 ; i<=n*m ; i++){
       
        if(i*smaller_area>=larger_area){
            cout<<i<<endl;
            break;
        }
    }
       return 0;
}