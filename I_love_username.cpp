#include <bits/stdc++.h>
using namespace std;

int main() 
{

    int number_of_contests;cin>>number_of_contests;
    vector<int> v(number_of_contests);
    int result=0;
    for(int i=0;i<number_of_contests;i++)
    {
        cin>>v[i];
    }

    int maximum_points = v[0],minimum_points = v[0];
    for(int i=1;i<number_of_contests;i++)
    {
        if(v[i]<minimum_points)
        {
            result++;
            // cout<<i<<' ';
            minimum_points = v[i];
        }
        else if(v[i]>maximum_points)
        {
            result++;
            // cout<<i<<' ';
            maximum_points = v[i];
        }
    }
    cout<<result;

return 0;
}
