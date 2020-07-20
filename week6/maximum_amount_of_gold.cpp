#include<bits/stdc++.h>
#define int long long 
#define endl '\n'
using namespace std;

int32_t main(){
	int w,n;
	cin>>w>>n;
	int wt[n];
	for(int i=0;i<n;i++)
		cin>>wt[i];
	vector<vector<int>> ans(w+1,vector<int> (n+1,0));
	for(int i=0;i<w+1;i++)
		for(int j=0;j<n+1;j++)
			{
				if(i==0 || j==0)
					ans[i][j]=0;
				else if(wt[j-1]<=i)
					ans[i][j]= max(wt[j-1]+ans[i-wt[j-1]][j-1],ans[i][j-1]);
				else
					ans[i][j]=ans[i][j-1];
			}

	cout<<ans[w][n];
	return 0;
}

