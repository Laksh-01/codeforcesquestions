#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int prod=1;
        int countneg=0;
        int zero=0;
        vector<int>a(n,-1);
        for(int i=0;i<n;i++){
            cin>>a[i];
            prod*=a[i];
            if(a[i]<0) countneg++;
            if(a[i]==0) zero++;
        }
       if(zero!=0){
        cout<<0<<endl;
       }
       else{
        if(countneg%2==0){
            cout<<1<<endl;
            cout<<1<<" "<<0<<endl;
        }
        else{
            cout<<0<<endl;
        }
       }
    }
}
