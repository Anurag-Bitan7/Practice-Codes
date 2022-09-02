#include <bits/stdc++.h>
#define vi vector<int>
using namespace std;
int main() 
{

    int n,m;cin>>n>>m;
    int ar[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>ar[i][j];
    }

    int top =0,right = m-1,down = n-1,left =0,dir =0;
    while(top <= down && right >= left)
    {
        if(dir == 0)
        {
            for(int i=left;i<=right;i++) cout<<ar[top][i]<<' ';
            top++;
            dir++;
        }
        else if(dir == 1)
        {
            for(int i=top;i<=down;i++) cout<<ar[i][right]<<' ';
            right--;
            dir++;
        }
        else if(dir == 2)
        {
            for(int i=right;i>=left;i--) cout<<ar[down][i]<<' ';
            down--;
            dir++;
        }
        else if(dir == 3)
        {
            for(int i=down;i>=top;i--) cout<<ar[i][left]<<' ';
            left++;
            dir=0;
        }
    }
return 0;
}
