#include <bits/stdc++.h>
using namespace std;
int main() 
{

    int n;double m;cin>>n>>m;
    int ar[n];
    int max_ind = -1;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i] <= m) ar[i]=0;
    }
    int max_ele = 0;
    for(int i=0;i<n;i++)
    {
        int temp = ceil(ar[i]/m);
        if(max_ele <= temp) 
        {
            max_ind = i;
            max_ele = temp;
        }
    }
    cout<<max_ind+1;
    

return 0;
}
