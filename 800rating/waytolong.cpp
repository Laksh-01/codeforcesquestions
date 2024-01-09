#include<bits/stdc++.h>
using namespace std;

void solve(){
    string n;
    cin>>n;
    int sum=0;
    for(int i=1;i<n.length()-1;i++){
        sum++;
    }
    if(n.length()>10){
        string ans;
        ans+=n[0];
        ans+=to_string(sum);
        ans+=n[n.size()-1];
        cout<<ans<<endl;
    }
    else{
        cout<<n<<endl;
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}