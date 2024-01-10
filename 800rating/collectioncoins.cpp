#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    int maxt=max(a,max(b,c));

    if((a+b+c+n)%3 == 0 && ((a+b+c+n) / 3) >= maxt) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}
int main()
{
    int t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}