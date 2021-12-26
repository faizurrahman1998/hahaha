#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using std::string, std::vector; 
using std::cin, std::cout; 

constexpr auto newline = "\n"; 


int main()
{
    int burns[4], burned = 0; 
    string inps; 

    for(int i = 0; i < 4; i++) cin >> burns[i]; 
    cin >> inps; 

    for(auto& ch: inps)
    {
        burned = burned + burns[static_cast<int>(ch - '0') - 1]; 
    }
    cout << burned << newline; 
}

