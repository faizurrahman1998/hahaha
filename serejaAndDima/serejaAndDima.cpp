#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using std::string, std::vector; 
using std::cin, std::cout; 

constexpr auto newline = "\n"; 

int main()
{
    int n, s = 0, d = 0; 
    cin >> n; 

    vector<int> nums; 

    for(int counter = 0; counter < n; counter++)
    {
        int inp; 
        cin >> inp; 
        nums.push_back(inp); 
    }

    for(int counter = 0; counter < n; counter++)
    {
        int m = 0; 
        if(nums.front() > nums.back()) 
        {
            m = nums.front();
            nums.erase(nums.begin()); 
        } 

        else
        {
            m = nums.back(); 
            nums.pop_back(); 
        }
        
        if(counter % 2) d = d + m; 
        else s = s+m; 
    }
    cout << s << " " << d << newline; 
}

