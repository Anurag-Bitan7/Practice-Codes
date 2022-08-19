#include <bits/stdc++.h>
using namespace std;

// const int N =1e6+7;
// vector<int> v(N);
// void prime(vector<int> &v)
// {
//     for (int i = 2; i < v.size(); i++)
//     {
//         if(v[i]!= -1)
//         {
//             for(int j=(i+v[i]);j<v.size();j+=v[i])
//             {
//                 v[j]=-1;
//             }
//         }
//     }  
// }

int main()
{
    // prime(v);
    string s;
    cin>>s;
    int res=0,is=1;
    for(auto i=s.begin();i!=s.end();i++)
    {
        if((*i) <'a') res-=(32+(int)(*i));
        else res+=((int)(*i)-32);
    }
    for(int i=2;i<res;i++)
    {
        if(res%i==0)
        {
            is=0;
            break;
        }
    }
    cout<<is<<endl;

    return 0;
}