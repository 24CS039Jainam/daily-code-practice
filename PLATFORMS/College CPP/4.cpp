/*TO FIND LCM (LEAST COMMON FACTOR) OF TWO NUMBERS*/

#include<iostream>
using namespace std;

int main(){
    int a,b,x=-1;
    cin>>a>>b;
    if(a==b){
        cout<<"The L.C.M. Is :- "<<a;
        x=a;
    }
    if(a>b){
        for(int i=1; i<=b ; i++ ){
            if(a%i==0 && b%i==0){
                 if(i>1){
                cout<<"The L.C.M. Is :- "<<i;
                x=i;
                break;
                }
            }
        }
    }
    else if(b>a){
        for(int i=1; i<=a ; i++ ){
            if(a%i==0 && b%i==0){
                if(i>1){
                
                cout<<"The L.C.M. Is :- "<<i;
                x=i;
                break;
                }
            }
        }
    }


   if(x == -1){
        cout<<"NO COMMON FACTORS !!!";
   }
    
    return 0;
}