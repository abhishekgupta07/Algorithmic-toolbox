#include<bits/stdc++.h>
#define int long long 
#define endl '\n'
using namespace std;



int32_t main(){
    int re = 0;
    int d,m,n;
    cin>>d>>m>>n;
    int st[n+2];
    st[0]=0;
    int flag=1;

    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        st[i]=a;
    }
    st[n+1]=d;

    int curr=0;
    

    while(curr<=n){
        int pre=curr;

        while((curr<=n) && (st[curr+1]-st[pre]<=m)){
            curr++;
           // cout<<curr<<endl;
        }
        if(curr==pre){
            flag=0;
            break;
        }
        if(curr<=n){
            re++;
            //cout<<re<<endl;
        }
    }
    if(flag)
        cout<<re<<endl;
    else
        cout<<-1<<endl;

    return 0;

}
