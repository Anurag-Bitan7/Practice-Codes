#include <bits/stdc++.h>
using namespace std;

int main() 
{
    double number_of_juice;cin>>number_of_juice;
    double orange_percentage=0;
    for(int i=0;i<number_of_juice;i++)
    {
        double percentage;cin>>percentage;
        orange_percentage+=percentage;
    }
    double result = (orange_percentage)/number_of_juice;
    cout<<setw(12)<<result;

return 0;
}
