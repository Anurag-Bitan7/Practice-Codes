#include<bits/stdc++.h>
using namespace std;

int power(int x,int n)
{
    if(n==0) return 1;
    else if(n==1) return x;
    int ans = power(x,n/2);
    
    if(n%2 ==0)
        return ans*ans;
    return ans*ans*x;
}

int main()
{
    int n,x;cin>>x>>n;
    cout<<power(x,n);
    return 0;
}