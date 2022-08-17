#include <bits/stdc++.h>
using namespace std;
int main() 
{

    int n;cin>>n;
    int count5=0,count0=0;
    bool flag = true,flag2=false;
    for(int i=0;i<n;i++)
    {
        int temp;cin>>temp;
        if(temp == 5)
            count5++;
        else
            count0++;    
    }
    // cout<<count5<<endl;
    count5=count5/9;
    count5=count5*9;
    
    while((count5 -- )&& count0>0)
    {
        cout<<5;
        flag2 = true;
    }
    if(flag2){
    while((count0 --)&& flag2)
    {
        cout<<0;
        flag = false;
    }
    }
    else if(count0)
    {
        cout<<0;
        flag = false;
    }
    if(flag)
        cout<<-1;
    
list<int> l;
l.push_back(4);
l.end()->xen
return 0;
}
