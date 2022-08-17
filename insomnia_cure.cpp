#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int ar[4];
    for(int i=0;i<4;i++)
    {
        cin>>ar[i];
        ar[i];
    }
    int d;cin>>d;
    int arr[d+1]={0};
    fill(arr+1,arr+d+1,1);
    // arr[0]=0;
    for(int i=0;i<4;i++)
    {
        if(arr[ar[i]] == 1)
            for(int j=ar[i];j<=d;j+=ar[i])
            {
                arr[j]=0;
            }
    }
    int temp = d;
    for(int i=0;i<=d;i++)
    {
        temp-=arr[i];
        // cout<<arr[i]<<' ';
    // cout<<endl;
    }
    cout<<temp;
return 0;
}
