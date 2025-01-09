#include<iostream>
using namespace std;

int main(){
    int cases, m, a, b, c;
    cin >> cases;
    
    while (cases--) {
        cin >> m >> a >> b >> c;
        
        // Seat monkeys in row 1 (at most 'a' monkeys)
        int seatedInRow1 = min(a, m);  
        // Remaining seats in row 1 after seating row 1 monkeys
        int remainingSeats = m - seatedInRow1;  

        // Seat monkeys in row 2 (at most 'b' monkeys)
        int seatedInRow2 = min(b, m);  
        // Remaining seats in row 2 after seating row 2 monkeys
        remainingSeats = min(remainingSeats, m - seatedInRow2);  

        // Seat monkeys without preference in the remaining seats
        int seatedWithoutPreference = min(c, remainingSeats);

        // Total number of seated monkeys
        int totalSeated = seatedInRow1 + seatedInRow2 + seatedWithoutPreference;

        // Output the result for this test case
        cout << totalSeated << endl;
    }
    
    return 0;
}
