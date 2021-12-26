#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using std::string, std::vector; 
using std::cin, std::cout; 

constexpr auto newline = "\n"; 


int main()
{
    int n; 
    cin >> n; 

    int ch = 0, temp = 0; 

    for(int counter = 0; counter < n; counter++)
    {
        int in; 
        cin >> in; 

        if(in != temp) ch++;
        
        temp = in;  
    }

    cout << ch << newline; 
}

