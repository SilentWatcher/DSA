/*
Challenge 2:
Modify Tea Prices
Create a program where the user inputs a base price for tea. Use type casting to increase the price by 10% and display the rounded new price using explicit casting.
💡 Hint: Use both float and int types, and demonstrate type casting.


*/

//! me
// #include <iostream>
// using namespace std;

// int main() {
//     // string tea_type = "No-Sugar";
//     // float tea_per_kg = 10.5;
//     // char rating = 'A';

//     // cout << "Tea Information:\n";
//     // cout << "Name: \"" << tea_type << "\"\n";
//     // cout << "Price per kg: ₹" << tea_per_kg << "\n";
//     // cout << "Rating: " << rating << "\n";

//     string baseTeaPrice; 
//     cout << "Do you want the tea? \n Sorry price are will increase by 10% enter Base price ";
//     getline(cin, baseTeaPrice);
//     float total  = stof(baseTeaPrice) * 1.1; 
//     int typeCast =   (int) (total);
//     cout << "Your total price will be "<< typeCast;
//     // stoi() → string to int
//     // stof() → string to float
//     // stod() → string to double

//     return 0;
// }

//! me + gpt 
//! what if program input is string and not number 
//! how can force user to write no rather than letter or any other chars 
#include <iostream>
using namespace std;
bool isOnlyNumber(string str) {
    if (str.empty()) return false;

    for (char ch : str) {
        if (!isdigit(ch)) return false; // ⛔ if any non-digit found
    }
    return true; // ✅ All characters were digits
}

int main() {
    string baseTeaPrice;
    cout << "Do you want the tea?\nSorry, price will increase by 10%.\n";

    while (true) {
        cout << "Enter base price: ";
        getline(cin, baseTeaPrice);

        // 🚨 Quick exit on too-large input
        if (baseTeaPrice.length() > 100) {
            cout << "❌ Input too long. Aborting.\n";
            break;
        }

        if (isOnlyNumber(baseTeaPrice)) {
            float total = stof(baseTeaPrice) * 1.1;
            int roundedPrice = (int)(total);
            cout << "✅ Your total price (rounded): ₹" << roundedPrice << "\n";
            break;
        } else {
            cout << "❌ Invalid input. Please enter a number like 10 or 25.5\n";
        }
    }

    return 0;
}
