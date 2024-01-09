#include<bits/stdc++.h>
using namespace std;
int digits(int n){
    int count=0;
    while(n>0){
        if(n/10!=0) count++;
        n=n/10;
    }
    return count+1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int d=digits(n);
        vector<int>a;
        for(int k=pow(10,d);k>=1;k=k/10){
            int place=n%k;
            a.push_back(place);
        }
        int carry=0;
        for(int i=0;i<a.size();i++){
            
            
        }

    }
}