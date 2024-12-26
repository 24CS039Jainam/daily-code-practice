#include<iostream>
using namespace std;
int main(){
    int num, digit;
    cin>>num;
    int array[num];

    for(int i=0 ; i<num ; i++){
        cin>>array[i];
    }
    for(int i=num ; i>0; i--){
        cout<<array[i];
    }
}