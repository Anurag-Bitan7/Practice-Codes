#include <bits/stdc++.h>
#define vi vector<int>
using namespace std;
int main()
{

    int ar[] = {1, 1, 0, 1, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0};
    int n = sizeof(ar) / sizeof(ar[0]);
    int count = 0, i = 0;
    while (i < n)
    {
        if (ar[i] == 1)
        {
            count++;
            i++;
        }
        else
        {
            while (ar[i] == 0)
            {
                i++;
            }
            if(i<n)
                swap(ar[i], ar[count]);
            count++;
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << ar[i] << ' ';
    }

    return 0;
}
