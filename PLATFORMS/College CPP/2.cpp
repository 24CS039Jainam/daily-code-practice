#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char name[100];
    string name2;
    fgets(name,100,stdin);
    int x = strlen(name);
    for(int i=0; i<x; i++){
        if(isupper(name[i])){
            name2 += tolower(name[i]);
        }
        else{
            name2 += toupper(name[i]);
        }
    
    }
    cout<<name2;
       return 0;
}