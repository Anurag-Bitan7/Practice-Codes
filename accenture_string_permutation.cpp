#include <bits/stdc++.h>
#define vi vector<int>
using namespace std;
long long fact(int n)
{
    if(n<=1)
        return 1;
    return n*fact(n-1)*1ll;    
}
int main() 
{

    string s;cin>>s;
    unordered_map<char,int> um;
    for(auto ch:s)
    {
        um[ch]++;
    }

    int duplicate = 1;
    for(auto &element : um)
    {
        if(element.second > 1)
        {
            duplicate*=fact(element.second);
        }
    }
    cout<<(fact(s.size())/duplicate);
return 0;
}
