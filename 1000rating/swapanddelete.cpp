// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         string s;
//         cin >> s;
//         int ones = 0;
//         int zeros = 0;
//         for (int i = 0; i < s.length(); i++) {
//             if (s[i] == '0')
//                 zeros++;
//             else
//                 ones++;
//         }
//         if((zeros-ones)==0){
//            cout<<0<<endl;
//         }
//         else{
//              int newstrlen = 0;
//             for (int i = 0; i < s.length(); i++) {
//                 if (s[i] == '0' && ones != 0 ) {
//                     newstrlen++;
//                     ones--;
                    
//                 }
//                  else if (s[i] == '0' && ones == 0 ) {
//                     newstrlen--;
//                 }

//                 else if (s[i] == '1' && zeros != 0 ) {
//                     newstrlen++;
//                     zeros--;
                  
//                 }
//                 else if(s[i] == '1' && zeros == 0 ){
//                     newstrlen--;
//                 }
//             }
//             cout<<s.length()-newstrlen<<endl;
//         }
       
        
        
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int zero = 0;
        int one = 0;
        
        for(int i=0;i<s.size();i++){
            if(s[i] =='0'){
                zero++;
            }
            else{
                one++;
            }
        }
        
        for(int i=0;i<s.size();i++){
            if(s[i] =='0'){
                if(one){
                    one--;
                }
                else{
                    break;
                }
            }
            else{
                if(zero){
                    zero--;
                }
                else{
                    break;
                }
            }
        }
        cout<<one + zero<<endl;
    }
}
