#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> genarate(vector<int> &v)
{
    vector<vector<int>> subsets;
    int n=v.size();
    int ct=(1<<n);
    for(int i=0;i<ct;i++)
    {
        vector<int> subset;
        for(int j=0;j<n;j++)
        {
            if((i&(1<<j))!=0)
            {
                subset.push_back(v[j]);
            }
        }
        subsets.push_back(subset);
    }
    return subsets;
}
int main() 
{
vector<int> v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);

vector<vector<int>> subsets;
subsets = genarate(v);
for(auto &i:subsets)
{
    for(auto &j:i)
    {
        cout<<j<<' ';
    }
    cout<<endl;
}
return 0;
}
