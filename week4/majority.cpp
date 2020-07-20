#include<bits/stdc++.h>
#define int long long 
#define endl '\n'
using namespace std;


int32_t main(){
	int n;
	cin>>n;
	map<int,int> mp;
	int flag=0;

	for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			mp[x]++;
			if(mp[x]>n/2)
			{
				cout<<1;
				flag=1;
				break;
			}
		}
	if(!flag)
		cout<<0;
	return 0;
	
}
