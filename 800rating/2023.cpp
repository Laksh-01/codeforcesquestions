#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<long long>b(n,-1);
        long long prod=1;
        for(int i=0;i<n;i++){
            cin>>b[i];
            prod*=b[i];
        }
        if(2023%prod==0){
            cout<<"YES"<<endl;
            cout<<2023/prod<<" ";
            k--;
            while(k!=0){
                cout<<1<<" ";
                k--;
            }
        }
        else{ cout<<"No"<<endl;}
      
        
    }
    return 0;
}