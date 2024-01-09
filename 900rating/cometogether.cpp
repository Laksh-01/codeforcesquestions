#include<bits/stdc++.h>
using namespace std;

long long calc(long long a,long long b,long long c){
    if(b>=a && c>=a){
        return min(b-a,c-a);
    }
    else if(b<=a && c<=a){
        return min(a-b,a-c);
    }
    return 0;
}

void solve(vector<long long>&a,vector<long long>&b,vector<long long>&c){
    long long ans=0;
    ans=calc(a[0],b[0],c[0])+calc(a[1],b[1],c[1]);
    cout<<ans+1<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
       vector<long long>a(2,-1);
       vector<long long>b(2,-1);
       vector<long long>c(2,-1);
       for(int i=0;i<2;i++){
        cin>>a[i];
       }
        for(int i=0;i<2;i++){
        cin>>b[i];
       }
         for(int i=0;i<2;i++){
        cin>>c[i];
       }
       solve(a,b,c);
    }
}