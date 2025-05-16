/*
input
3 12345678912345 a 334.23 14049.30493

output 

3
12345678912345
a
334.23
14049.3

*/


/*

 Questions to Ask Yourself before you touch the code:
What data types match those input values?

Can int handle 12345678912345?

Should I go with float, double, long, or long long?

How many inputs are there, and do they need to be read in order?

Will cin work here? Or do I need getline()?

Does the last value need to be rounded? How many decimals?

Any formatting rules for output?

*/

//! v1 
// #include <iostream>
// using namespace std;


// int main() {
//     // Your code starts here

//     std::string numberInput ;
//     // getline(cin, numberInput); // we don't need this now 

    
//     cout <<  numberInput;

//     // how can split them with space 
//     // and print them one by one 
//     // in js ik split method but what about cpp 
//     // help me to break 
//     // do i need to for loop do do breaking thing 

//     // i am thinking we need to convert the arr
//     // arr  = [3, 12345678912345,334.23, 14049.3]
//     // wait hold on can we do without converting it 

    
    
//     return 0;
// }

/*
LEARNINGS : 
- the is stl which contain isstringstream which take input and convert to no 

 */

//!v2

// #include <iostream>
// #include <string>
// #include <sstream>
// using namespace std;


// int main() {


//     // string numberInput ;
//     // getline(cin, numberInput); // getting input 
//     istringstream input("3 12345678912345 a 334.23 14049.30493");
//     int num1, num2, num3, num4, num5;
//     input >> num1 >> num2 >> num3 >> num4 >> num5 ; 
//     // cout <<  numberInput;
//     cout << num1 << "\n" << num2 << "\n" << num3 << "\n" << num4 << "\n" << num5;


    
//     return 0;
// } 


//!v3 


// #include <iostream>
// #include <string>
// #include <sstream>
// using namespace std;


// int main() {


//     // string numberInput ;
//     // getline(cin, numberInput); // getting input 
//     istringstream input("3 12345678912345 a 334.23 14049.30493");
//     // int num1, num2, num3, num4, num5;// this line assume all are same datatype 

//     int count;
//     long long bigNum;
//     char ch;
//     float price1;
//     double price2; // this double has decimal point after 2 digit // how can i do that compare with js as well 

//     input >> count >> bigNum >> ch >> price1 >> price2 ; 
//     // cout <<  numberInput;
//     cout << count << "\n" << bigNum << "\n" << ch << "\n" << price1 << "\n" << price2;


    
//     return 0;
// } 




//!v4

// #include <iostream>
// #include <string>
// #include <sstream>
// #include <iomanip>
// using namespace std;


// int main() {


//     string numberInput ;
//     getline(cin, numberInput);
//     istringstream input(numberInput);

//     int count;
//     long long bigNum;
//     char ch;
//     float price1;
//     double price2; 
//     input >> count >> bigNum >> ch >> price1 >> price2 ; 

//     cout << count << "\n" << bigNum << "\n" << ch << "\n" << price1 << "\n" << fixed << setprecision(2) << price2;


    
//     return 0;
// } 



//? this giving idea about what istringstream is doing 
// #include <iostream>
// #include <sstream>
// #include <string>

// int main() {
//     std::string data = "100 200 300";
//     std::istringstream iss(data);

//     int num1, num2, num3;
//     iss >> num1 >> num2 >> num3;

//     std::cout << "Numbers are: " << num1 << ", " << num2 << ", " << num3 << std::endl;

//     return 0;
// }

//? My v4 works for test case one why
// Test case 1: 3 12345678912345 a 334.23 14049.30493  
// output 
/*
3
12345678912345
a
334.23
14049.3
*/

// Test case 2: 100 99999999999 P 777.99 77.77777
// output
/*
100
99999999999
P
777.99
77.78
*/
// Test Case 3: 19919113 10000000100000 a 999.11 7.77777

/*
19919113
10000000100000
a
999.11
7.77777
*/

//? why it only work for test case 1 

/*
wait what the hell 
why there is different precisions in last double digin 

*/


//! v4 




// #include <iostream>
// #include <string>
// #include <sstream>
// #include <iomanip>
// using namespace std;


// int main() {


//     string numberInput ;
//     getline(cin, numberInput);
//     istringstream input(numberInput);

//     int count;
//     long long bigNum;
//     char ch;
//     float price1;
//     double price2; 
//     input >> count >> bigNum >> ch >> price1 >> price2 ; 

//     cout << count << "\n" << bigNum << "\n" << ch << "\n" << price1 << "\n" << fixed << setprecision(2)<< showpoint << price2;


    
//     return 0;
// }


//! v5


// #include <iostream>
// #include <string>
// #include <sstream>
// using namespace std;

// int main() {
//     string numberInput;
//     getline(cin, numberInput);
//     istringstream input(numberInput);

//     int count;
//     long long bigNum;
//     char ch;
//     float price1;
//     double price2;

//     input >> count >> bigNum >> ch >> price1 >> price2;

//     // cout.precision(12); // High enough to preserve accurate float/double
//     cout << count << "\n";
//     cout << bigNum << "\n";
//     cout << ch << "\n";
//     cout << price1 << "\n";
//     cout << price2;

//     return 0;
// }




// #include <iostream>
// #include <string>
// #include <sstream>
// #include <iomanip>
// using namespace std;

// int main() {
//     string numberInput;
//     getline(cin, numberInput);
//     istringstream input(numberInput);

//     int count;
//     long long bigNum;
//     char ch;
//     float price1;
//     double price2;

//     input >> count >> bigNum >> ch >> price1 >> price2;

//     cout << count << "\n";
//     cout << bigNum << "\n";
//     cout << ch << "\n";
//     cout << price1 << "\n";

//     // Smart rounding logic
//     cout << defaultfloat; // reset any fixed formatting
//     if (price2 * 100 == (int)(price2 * 100)) {
//         // Exactly 2 decimal places — just show up to that
//         cout << fixed << setprecision(1) << price2;
//     } else if ((int)(price2 * 1000) % 10 == 0) {
//         // 2 decimals, third is zero — use 2 precision
//         cout << fixed << setprecision(2) << price2;
//     } else {
//         // Has more precision
//         cout << price2;
//     }

//     return 0;
// }



#include <iostream>
using namespace std;
int main() {
    // Your code starts here
    int n;
    cin >> n;
    cout << n << '\n';


    long long m;
    cin >> m;
    cout << m << '\n';


    char o;
    cin >> o;
    cout << o << '\n';


    float p;
    cin >> p;
    cout << p << '\n';


    double q;
    cin >> q;
    cout << q;
    
    
    return 0;
}


