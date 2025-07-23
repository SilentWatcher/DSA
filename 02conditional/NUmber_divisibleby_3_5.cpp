//  checks if a number is divisible by both 3 and 5?

#include <iostream>
#include <string> 
using namespace std ; 


int main () {
    string input ; 
    cin >> input ; 

     int finalNUmber  = stoi(input); 

     if ( finalNUmber % 3 == 0 && finalNUmber  %  5 == 0 ) {
        cout << "Yes";
     }else {
        cout << "No";
     }
}