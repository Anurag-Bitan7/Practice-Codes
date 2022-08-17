#include <bits/stdc++.h>
#define vi vector<int>
using namespace std;
int main()
{

    vi v{0,1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0,1};
    int n = v.size(), i = 0;
    int fn = -1;
    bool flag = false;
    while (i < n)
    {
        if (v[i] != v[0])
        {
            fn = v[i];
            break;
        }
        i++;
    }
    while (i < n)
    {
        if (v[i] != v[0])
        {
            // fn = v[i];
            if (flag == false)
            {
                cout << "from " << i << ' ';
                flag = true;
            }
        }
        else
        {
            if(flag)
            {
                cout<<"to "<<i-1<<endl;
                flag = false;
            }
        }
        i++;
    }
    if(v[n-1] != v[0])
    {
        cout<<"to "<<n-1;
    }

    return 0;
}
