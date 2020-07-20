#include<bits/stdc++.h>
#define int long long 
#define endl '\n'
using namespace std;

void merge(int a[],int m,int L,int R,int &count){

    int n1=m-L+1;
    int n2=R-m;

    int t1[n1];
    int t2[n2];

    for(int i=0,j=L;i<n1&&j<m+1;i++,j++)
        t1[i]=a[j];
    for(int i=0,j=m+1;i<n2&&j<R+1;i++,j++)
        t2[i]=a[j];

    
    int i=0;
    int j=0;

    
    

    int c=L;


    while(i!=n1 && j!=n2){
        if(t1[i]<=t2[j]){
            a[c]=t1[i];
            i++;
            
        }
        else
        {
            a[c]=t2[j];
            j++;
            count+=n1-i;
            
            
        }
        c++;
        


    }

    
        for(int k=i;k<n1;k++)
            {
                a[c]=t1[k];
                c++;
            }
    
        for(int k=j;k<n2;k++)
            {
                a[c]=t2[k];
                c++;
            }

    

}

void mesort(int arr[],int L,int R,int &count ){
    
    
    
    if(L<R)
    {
        int m = (L+(R-L)/2);

        

        mesort(arr,L,m,count);
        mesort(arr,m+1,R,count);

        merge(arr,m,L,R,count);
    }

    

}

int32_t main(){
    int count=0;
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }

    mesort(A,0,n-1,count);

    cout<<count;

    return 0;

}
