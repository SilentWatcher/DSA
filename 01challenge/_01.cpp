/*

Challenge 1:
Tea Information Display
Write a program that declares variables to store the type of tea, its price per kilogram (float), and its rating (char). Use data types effectively and print them in a formatted output using escape sequences.
💡 Hint: Use \n for new lines and " to quote the tea name.
*/


#include <iostream>
using namespace std;

int main() {
    string tea_type = "No-Sugar";
    float tea_per_kg = 10.5;
    char rating = 'A';

    cout << "Tea Information:\n";
    cout << "Name: \"" << tea_type << "\"\n";
    cout << "Price per kg: ₹" << tea_per_kg << "\n";
    cout << "Rating: " << rating << "\n";

    return 0;
}


