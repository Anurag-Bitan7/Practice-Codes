#include <bits/stdc++.h>
using namespace std;
vector<char> gs;
void reverse_string( string &s)
{
    if(s.size()==0)
        return;
    string sub = s.substr(1);
    reverse_string(sub); 
    gs.push_back(s[0]);   
}

int main() 
{

    string s ="Anurag Bhattacharya";
    reverse_string(s);
    for(auto &i:gs)
        cout<<i;
return 0;
}
