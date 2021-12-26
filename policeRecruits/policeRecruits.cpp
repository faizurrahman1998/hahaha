#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using std::string, std::vector; 
using std::cin, std::cout; 

constexpr auto newline = "\n"; 


int main()
{
    int n, re = 0, unsol = 0; 
    cin >> n; 

    for(int counter = 0; counter < n; counter++)
    {
       int inp; cin >> inp; 
       if( !re && inp == -1)
       {
           unsol++; 
           continue; 
       }
       re += inp; 
    }
    cout << unsol << newline; 
}

