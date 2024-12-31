#include<iostream>
using namespace std;
int main(){
    char str[100];
    int i=0;
    int length=0;
    cout<<"enter the string: ";
    cin.getline(str,100);
    
    while(str[i]!='\0'){
        length++;
        i++;
    }
    cout<<"length is "<<str<<" is :"<<length;

}