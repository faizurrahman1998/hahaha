#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

constexpr auto newline = "\n"; 
using std::string, std::vector; 
using std::cin, std::cout; 

void changeCase(string& word, bool lower = 1)
{
    if (lower)
    {
        for(auto& ch: word)
        {
            ch = char(tolower(ch)); 
        }
    }
    else
    {
        for(auto& ch:word)
        {
            ch = char(toupper(ch)); 
        }
    }
}

int main()
{
    int upper = 0, lower = 0;
    string word; 
    
    cin >> word; 

    for(auto &ch:word)
    {
        if(int(ch) <= 90) upper++; 
        else lower++; 
    }

    ((lower < upper) ? changeCase(word, 0) : changeCase(word)); 

    cout << word << newline;
}

