

// Years divisible by 4 are leap years,
// Except years divisible by 100 (not leap years),
// Unless they are also divisible by 400 (then they are leap years).
#include <iostream>
using namespace std;
#include <string>
int main() {

    string input_year_string ; 
    cin >> input_year_string; 
    int input_year  = stoi(input_year_string); 



    if ((input_year % 4 == 0 && (input_year % 100 != 0 || input_year % 400 == 0))) {
        cout << "Leap Year";
    } else {
        cout << "Not a Leap Year";
    }

    return 0;
}
