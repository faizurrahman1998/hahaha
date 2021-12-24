#include<iostream>
#include<string>
#include<vector>

constexpr auto newline = "\n"; 
using std::string, std::vector; 
using std::cin, std::cout; 

int main()
{
    int i = 0; 

    for(; i < 25; i++)
    {
        int a; 
        cin >> a; 
        if(a) break; 
    }
    i++; 

    int x, y; 
    x = (int)(i/5) + 1; 
    y = i % 5;
    
    if (!y) 
    {
        y = 5; 
        x--;
    }

    cout << abs(x - 3) + abs(y - 3) << newline; 
}

