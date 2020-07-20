#include<bits/stdc++.h>
#define int long long 
#define endl '\n'
using namespace std;

bool compare( pair<int,int> p , pair<int,int> q){
    if(p.first!=q.first)
        return p.first<q.first ;
    else
        return p.second<q.second;

}

int32_t main(){
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    while(n){
        int a,b;
        cin>>a>>b;
        v.push_back(pair<int,int>(a,b));
        n--;
    }

    int count=0;
    vector<int> poi;
    sort(v.begin(),v.end(),compare);

    while(v.size()){
        vector<int> t;

        int i=0;
        
        t.push_back(v[i].second);
        for(int j=i+1;j<v.size();){
            if(v[i].second>=v[j].first){
                t.push_back(v[j].second);
                v.erase(v.begin()+j);
                
            }
            else
                j++;

        }
        v.erase(v.begin()+i);
        count++;
        poi.push_back(*min_element(t.begin(),t.end()));
        
    }
    cout<<count<<endl;
    for(int a:poi)
        cout<<a<<" ";
    cout<<endl;
    return 0;

}
