#include <bits/stdc++.h>
using namespace std;
static bool cmp(const pair<int,string> a,const pair<int,string> b)
{
    if(a.first==b.first)
        return a.second<b.second ;
    return a.first<b.first;    
}
int main() 
{
int test;cin >> test;
vector<pair<int,string>> mp;
while( test--)
{
    string s;cin>>s;
    int marks;cin>>marks;
    pair<int,string> p;
    p.first=marks;
    p.second=s;
    mp.push_back(p);
}
sort(mp.begin(),mp.end(),cmp);
for (auto i : mp) {
        cout << (i.first) << ' ' << (i.second)
            << '\n';
    }
return 0;
}
