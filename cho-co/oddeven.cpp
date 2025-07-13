// input 
// 5 
// output 
// // Odd Number



#include <iostream>
using namespace std;
int main() {
    // Your code starts here
    //Don't Print a new Line after the output


    int n;
    cin >> n;
    int  number = n % 2;
    if (number == 0 ){
        std::cout << "Even number";
    }else{
        std::cout << "Odd number";
    }

    // std::cout << "Hello, World!"<< number << std::endl;
    return 0;
}
