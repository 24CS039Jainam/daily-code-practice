/*Binary to Octal*/
#include<iostream>
using namespace std;

int main(){
    long binary;
    cout<<"Enter binary value :- ";
    cin>>binary;
    int count;
    int p[3];
    for(int i=0 ; i<1 ; i++){
        p[0] = (binary % 1000);
        binary = binary/1000;
        p[1] = (binary % 1000);
         binary = binary/1000;
        p[2] = (binary % 1000);
         binary = binary/1000;

    }
    for(int i=2; i >= 0 ; i--){
        
        switch(p[i]){
        case 0 : cout<<"0";
        break;
        case 1 : cout<<"1";
        break;
        case 10 : cout<<"2";
        break;
        case 11 : cout<<"3";
        break;
        case 100 : cout<<"4";
        break;
        case 101 : cout<<"5";
        break;
        case 110 : cout<<"6";
        break;
        case 111 : cout<<"7";
        break;
    }
    }
     return 0;
}