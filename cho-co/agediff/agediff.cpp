#include <iostream>
using namespace std;
int main() {
    // Your code starts here
    //Don't Print a new Line after the output


    int age;
    cin >> age;
    if (age >=0 && age <=12 ){
        std::cout << "Child";
    }
    else if (age >=13 && age <=19 ){
        std::cout << "Teenager";
    }
    else if (age >=20 && age <=59 ){
        std::cout << "Adult";
    }
     else{
        std::cout << "Senior";
    }

    // std::cout << "Hello, World!"<< number << std::endl;
    return 0;
}
