# DSA



# 13/7/2025
- custom namespace 
- about `auto` keyword : compiler decide the type of data
When to use auto:

When the type is obvious or long to write (e.g., iterators, lambdas).
To make code cleaner and easier to read.
When you want the compiler to handle type deduction for you.
```cpp
auto x = 5;           // int
auto y = 3.14;        // double
auto name = "hello";  // const char*
auto sum = [](){ return 2 + 2; }; // lambda function
```
- cannot call nested  refular functions in cpp we should make lamda function 
```cpp
int main() {
    auto addNum = []() {
        int a = 19, b = 19;
        return a + b;
    };
    int sum = addNum();
    cout << sum;
    return 0;
}
```
