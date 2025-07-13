



#include <iostream>
// using namespace std;


// int addNum(){
//     int a = 19; 
//     int b = 19; 
//         // cout <<  a + b ; 
//     return a + b ; // 3 
// }

int main() {
    // Your code starts here
    //Don't Print a new Line after the output

auto addNum =[](){
    auto a = 19; 
    int b = 9; 
        // cout <<  a + b ; 
    return a + b ; // 3 
};


// int ages[3] = {1, 2,3};    
// std::string name  = "Chandan and";
// std::cout  << name; 


// string name  = "Chandan Bhaya -main" ;
// cout  << name << " learningS cpp "; 
auto sum = addNum() ; 
std::cout << sum;
return sum;
}




// what is wrong in this 
// i am from js 

// just calling another function from outside in main 
// because i think main() is entry point of program 