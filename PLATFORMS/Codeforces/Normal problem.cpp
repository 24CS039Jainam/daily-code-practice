#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string arr[n]; 
   
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    for (int i = 0; i < n; i++) {
        string reversed = "";
        for (int j = arr[i].length() - 1; j >= 0; j--) {
            char ch = arr[i][j];
           
            if (ch == 'p') {
                reversed += 'q';
            } else if (ch == 'q') {
                reversed += 'p';
            } else {
                reversed += ch;
            }
        }
        cout << reversed << endl; 
    }

    return 0;
}
