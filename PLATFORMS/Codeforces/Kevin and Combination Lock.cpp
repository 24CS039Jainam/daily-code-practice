#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    int array2[n];
    int array3[n];
    for(int i=0; i<n ; i++){
        cin>>array[i];
    }
    for(int i=0 ; i<n ; i++){
        if(array[i]==3 && array[i+1]==3){
            array2[i] = array[i];
            array2[i+1] = array[i+1];
        }
        else{
            array3[i]=array3[i];
        }
    }
    for(int i=0 ; i<n ; i++){
        if(array[i]-(33*n)){

        }
    }
}