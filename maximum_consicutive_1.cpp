#include <bits/stdc++.h>
#define vi vector<int>
using namespace std;
int main() 
{

    vi v{1,2,3,5,3,2,1,5,11,1,1,1,1,1,1,3,4,1,1,1,1};
    int i=0;
    int count =0,res = 0;
    while(i<v.size())
    {
        while(v[i] == 1)
        {
            count++;
            i++;
        }
        res = max(res,count);
        count = 0;
        i++;
    }
    cout<<res;

return 0;
}
