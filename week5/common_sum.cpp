#include<bits/stdc++.h>
#define int long long 
#define endl '\n'
using namespace std;

int32_t main(){
	int c=0;
	int n;
	cin>>n;
	string s1;
	for(int i=0;i<n;i++){
		char s;
		cin>>s;
		s1.push_back(s);
	}
	int m;
	cin>>m;
	string s2;
	for(int i=0;i<m;i++){
		char s;
		cin>>s;
		s2.push_back(s);
	}

	int d;
	cin>>d;
	string s3;
	for(int i=0;i<d;i++){
		char s;
		cin>>s;
		s3.push_back(s);
	}

	

	int mat[s1.length()+1][s2.length()+1][s3.length()+1];



	for(int i=0;i<=s1.length();i++)
		for(int j=0;j<=s2.length();j++)
			for(int k=0;k<=s3.length();k++)
		{	
			if(i==0 || j==0 || k==0)
				mat[i][j][k]=0;
			else
			{
				int a=0;
				if(s1[i-1]==s2[j-1] && s2[j-1]==s3[k-1])
					a = mat[i-1][j-1][k-1]+1;
				else 
				    a = mat[i-1][j-1][k-1];

				mat[i][j][k]=max({mat[i-1][j][k-1],mat[i-1][j-1][k],mat[i][j-1][k-1],mat[i][j-1][k],mat[i][j][k-1],mat[i-1][j][k],a});
			}

		
		}


	cout<<mat[s1.length()][s2.length()][s3.length()];

	return 0;

}
