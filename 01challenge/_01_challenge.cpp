#include <iostream>
// #include <string>
using namespace std ; 
#include <typeinfo>

// int main (){
//     string teaName = "HPjjjj"; 
//     float teaPrice = 100.50; // perkg
//     char grade = 'A';
//     cout << "Tea Name " << teaName  << "\n"; 
//     cout <<  "Tea Price " << teaPrice << "\n" ; 
//     cout << "Rating " << grade  << "\n"; 
//     return 0; 
// }


// **Challenge 2:**
//  


// int main (){
//     float teaPrice; 
//     cin >> teaPrice ; 
//     // 
//     float totalPrice = teaPrice + (teaPrice * 10 / 100) ; 
//     cout << "Tea Price is: " << totalPrice << endl;
//     return 0; 
// }



int main() {
    string favrateTea;
    cout << "What is your fav tea?";
    getline(cin, favrateTea);
    cout << "Your Favorite Tea is " << favrateTea << endl;

    cout << "How many cups of tea you want: ";
    string noOfCups;
    getline(cin, noOfCups);

    string discount;
    int discountNum;
    while (true) {
        cout << "Enter discount (number): ";
        getline(cin, discount);
        try {
            // inputs are alwys string 
            // converted to no 
            discountNum = stoi(discount); // Try to convert to int
            break; // Success, exit loop
        } catch (...) {
            cout << "Please put discount in number!" << endl;
        }
    }
    float TeaPrice = 100 ; 
    cout << "So you want " << noOfCups << " of " << favrateTea << endl;
    cout << "Discount as number: " << discountNum << endl;
    cout << "Total PRice " << TeaPrice - (TeaPrice * discountNum / 100.0) ;

    return 0;
}


