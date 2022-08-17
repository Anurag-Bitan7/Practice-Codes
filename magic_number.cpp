#include <bits/stdc++.h>
using namespace std;
int main() 
{

    string n;cin>>n;
    int i=0;
    while(i<n.size())
    {
        if(n[i]=='1')
        {
            if(n[i+1] == '4')
            {
                if(n[i+2]=='4')
                {
                    i=i+3;
                }
                else
                {
                    i=i+2;
                }
            }
            else
            {
                i++;
            }
        }
        else
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
return 0;
}
