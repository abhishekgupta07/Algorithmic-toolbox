#include<bits/stdc++.h>
#define int long long 
#define endl '\n'
using namespace std;


int32_t main(){
	int n;
	cin>>n;
	vector<int> v;
	int i=1;

	while(n){
		if(n-i>i){
			n-=i;
			v.push_back(i);
			i++;
		}
		else{
			v.push_back(n);
			n=0;
		}


	}

	cout<<v.size()<<endl;
	for(int z:v)
		cout<<z<<" ";
	cout<<endl;
	return 0;
}
