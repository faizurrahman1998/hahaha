#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>
#include<algorithm>

constexpr auto newline = "\n"; 
using std::string, std::vector; 
using std::cin, std::cout; 

int main()
{
    string uName; 
    cin >> uName; 
    int counter = 0; 
    string dist_l = ""; 

    for(auto it = uName.begin(); it < uName.end(); it++)
    {
        if (find(dist_l.begin(), dist_l.end(), *it) == dist_l.end())
        {
            dist_l.push_back(*it); 
        }
    }

    cout << ((dist_l.size() % 2 == 0) ? "CHAT WITH HER!" : "IGNORE HIM!") ;
} 
