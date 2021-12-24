#include<iostream>
#include<string>
#include<vector>

constexpr auto newline = "\n"; 
using std::string, std::vector; 
using std::cin, std::cout; 

int main()
{
    int n, solves = 0; 
    cin >> n; 

    for(int counter = 0; counter < n; counter++)
    {
        int votes = 0; 
        for(int i = 0; i < 3; i++)
        {
            int a; 
            cin >> a; 
            votes = votes + a; 
        }
        if (votes > 1) solves++; 
    }

    cout << solves << newline; 

}

