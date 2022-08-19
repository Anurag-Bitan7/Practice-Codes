#include <bits/stdc++.h>
using namespace std;
const int M = 1e6 + 7;
int h,n,m;
int arr[M];

bool wood(int h)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i]-h;
    }
    return sum>=m;
}

int main()
{
    cin >> n >> m;
    int hi = 0, lo = n, mid;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (hi - lo > 1)
    {
        mid=(hi+lo)/2;
        if(wood(mid))
            lo=mid;
        else
            hi=mid-1;    
    }
    if(wood(hi))
        cout<<hi<<endl;
    else
        cout<<lo<<endl;

    return 0;
}