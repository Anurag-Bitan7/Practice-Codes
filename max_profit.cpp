#include <bits/stdc++.h>
#define vi vector<int>
using namespace std;
int maxProfit(vector<int>& prices) {
        int res = 0;
        int i=1;
        while(i<prices.size())
        {
            if(prices[i-1]<prices[i]) 
                res+=(prices[i]-prices[i-1]);
            i++;
        }
        return res;
    }
int main() 
{
    vi v{7,1,5,3,6,4};
    cout<<maxProfit(v);
    
return 0;
}
