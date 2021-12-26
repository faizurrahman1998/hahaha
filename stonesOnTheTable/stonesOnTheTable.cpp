#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using std::string, std::vector; 
using std::cin, std::cout; 

constexpr auto newline = "\n"; 


int main()
{
    int n, ch = 0;
    string inp; 

    cin >> n >> inp;
    char temp = *inp.begin(); 

    for(string::iterator it = inp.begin() + 1; it < inp.end(); it++)
    {
        if(temp == *it) ch++; 
        temp = *it;
    }

    cout << ch << newline; 
}
