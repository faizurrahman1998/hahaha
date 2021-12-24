#include<iostream>
#include<string>

constexpr auto newline = "\n"; 
using std::string; 

int main()
{
    int a = 0, b = 0, year = 0; 

    std::cin >> a; 
    std::cin >> b; 

    while(a <= b)
    {
        a = a*3; 
        b = b*2;
        year++; 
    }

    std::cout << year << newline; 
}

