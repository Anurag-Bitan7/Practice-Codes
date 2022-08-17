#include <bits/stdc++.h>
using namespace std;

int main() 
{

long long number ;cin>>number;
int count_of_lucky_numbers=0;

while(number)
{
    
    int is_lucky_number = number%10;
    if(is_lucky_number == 4 || is_lucky_number == 7)
        count_of_lucky_numbers++;
    
    number/=10;
    if(count_of_lucky_numbers >7)
    {
        break;
    }
}
if(count_of_lucky_numbers == 4 || count_of_lucky_numbers == 7)
{
    cout<<"YES";
}
else
    cout<<"NO";



return 0;
}
