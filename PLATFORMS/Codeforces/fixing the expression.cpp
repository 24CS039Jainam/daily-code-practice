#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n],c[n];
    char b[n];
    for(int i=1 ; i<=n ; i++){
        
        cin>>a[i]>>b[i]>>c[i];
        cout<<endl;
    }
    //60 < , 62 > , 61 = 
    for(int i=1 ; i<=n ; i++){
        if(b[i] == '<'){
            if(a[i]<c[i]){
                cout<<a[i]<<b[i]<<c[i]<<endl;
                
            }
            else if(a[i]==c[i]){
                b[i] = '=';
                cout<<a[i]<<b[i]<<c[i]<<endl;
            }
            else if (a[i]>c[i]){
                b[i] = '>';
                cout<<a[i]<<b[i]<<c[i]<<endl;
            } 
        }
        else if(b[i] == '>'){
            
            if(a[i]>c[i]){
                cout<<a[i]<<b[i]<<c[i]<<endl;
            }
            else if(a[i]==c[i]){
                b[i] = '=';
                cout<<a[i]<<b[i]<<c[i]<<endl;
            }
            else if(a[i] < c[i]){
                b[i] = '<';
                cout<<a[i]<<b[i]<<c[i]<<endl;
            }
            
            
        }

        else if(b[i] == '='){
            
            if(a[i]>c[i]){
                b[i] = '>';
                cout<<a[i]<<b[i]<<c[i]<<endl;
            }
            else if(a[i]==c[i]){
                
                cout<<a[i]<<b[i]<<c[i]<<endl;
            }
            else if(a[i] < c[i]){
                b[i] = '<';
                cout<<a[i]<<b[i]<<c[i]<<endl;
            }
            
            }
        

}
return 0;
}