#include<bits/stdc++.h>
#define int long long 
#define endl '\n'
using namespace std;


int32_t main(){
    int m;
    cin>>m;
    int mon[]={2,3,1};
    int minm[m+1];
    vector<vector<int>> v(m+1);
    minm[0]=0;
    minm[1]=0;
    minm[2]=1;
    minm[3]=1;
    v[0] = {0} ;
    v[1] = {1} ;
    if(m>1)
        v[2]={1,2};
    if(m>2)    
        v[3]={1,3};
    
    
    


   for(int i=4;i<=m;i++){
        

            int w;
            minm[i]=10000;
            for(int x:mon)
                if(i>=x){
                    if(x==1){
                        if(minm[i-x]+1<minm[i]){
                            minm[i]=minm[i-x]+1;
                            w=i-x;
                        }
                    }

                    
                    else 
                        if(i%x==0)
                            if(minm[i/x]+1<minm[i]){
                                minm[i]=minm[i/x]+1;
                                w=i/x;
                            }
                    
                }
    
            v[i]=v[w];
            v[i].push_back(i);


                
    }

    

    cout<<minm[m]<<endl;
    for(int d:v[1])
        cout<<d<<" ";

    return 0;
}
