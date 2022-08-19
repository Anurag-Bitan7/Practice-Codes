#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> res;
void genarate(int i,vector<int> &v,vector<int> &num)
{
    if(i==num.size())
    {
        res.push_back(v);
        return;
    }
    
    genarate(i+1,v,num);
    
    v.push_back(num[i]);
    genarate(i+1,v,num);
    v.pop_back();

}

int main() 
{
    int n;cin>> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    vector<int> v;
    // vector<vector<int>> r;
    genarate(0,v,nums);
    for(auto i : res)
    {
        for(auto j:i )
            cout<<' '<<j;
        cout<<endl;    
    }
    return 0;
}