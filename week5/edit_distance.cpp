#include<bits/stdc++.h>
#define int long long 
#define endl '\n'
using namespace std;

int32_t main(){
	string s1,s2;
	cin>>s1>>s2;

	int mat[s1.length()+1][s2.length()+1];

	for(int i=0;i<=s1.length();i++)
		mat[i][0]=i;
	for(int i=0;i<=s2.length();i++)
		mat[0][i]=i;

	for(int i=1;i<=s1.length();i++)
		for(int j=1;j<=s2.length();j++)
		{	
			int a=0;
			if(s1[i-1]==s2[j-1])
				a= mat[i-1][j-1];
			else 
			    a= mat[i-1][j-1]+1;
			mat[i][j]=min({mat[i-1][j]+1,mat[i][j-1]+1,a});
		}

	cout<<mat[s1.length()][s2.length()];

	return 0;

} 
