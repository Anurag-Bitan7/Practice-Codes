#include <bits/stdc++.h>
// #define ll longlong;
using namespace std;
const int N = 10;
vector<int> v1(N, 0);
vector<vector<int>> m(N, v1);
bool isSafe(vector<vector<int>> &v, int x, int y, int n)
{
	return ( (x < n && y < n) && (v[x][y])==1);
}

bool maze(vector<vector<int>> &v, int x, int y, int n)
{
    if(x==n-1 && y== n-1){
		m[x][y]=1;	
		return true;
	}
	if (isSafe(v, x, y, n))
	{
		m[x][y] = 1;
		if (maze(v, x, y + 1, n))
			return true;
		if (maze(v, x + 1, y, n))
			return true;
		m[x][y] = 0;
		return false;
	}
	return false;
}

int main()
{
	// your code goes here
	int n=5;//cin>>n;
	vector<vector<int>> v;
	for(int i=0;i<n;i++)
	{
		vector<int> v1;
		for(int i=0;i<n;i++)
		{
			int x;cin>>x;
			v1.push_back(x);
		}
		v.push_back(v1);
	}
	maze(v,0,0,n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;i<n;j++)
		{
			cout<<m[i][j]<<' ';
		}
		cout<<endl;
	}
}