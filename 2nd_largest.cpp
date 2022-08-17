#include <bits/stdc++.h>
#define vi vector<int>
using namespace std;
int main() 
{

    int ar[] ={3,5,2,7,9,5,0,33,55,76,8,98,78,76,68};
    int n=sizeof(ar)/sizeof(ar[0]);
    int l=ar[0];
    int l2=INT_MIN;
    for(int i = 1;i<n;i++)
    {
        if(l < ar[i])
        {
            l2 = l;
            l=ar[i];

        }
        else if(l2 < ar[i])
        {
            l2 = ar[i];
        }
    }
    cout<<l2;
return 0;
}
