#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int sum2=0;
    vector<int>sum;
    for(int i=0;i<n;i++){
        vector<int>a(3,-1);
        for(int j=0;j<3;j++){
            cin>>a[j];
            sum2+=a[j];
        }
        sum.push_back(sum2);
        sum2=0;
    }
    int final=0;
   for(int i=0;i<n;i++){
    if(sum[i]>1) final++;
   }
   cout<<final<<endl;
}

int main(){
   
    
        solve();
}