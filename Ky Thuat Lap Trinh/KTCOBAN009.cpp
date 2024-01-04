#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    string s;cin>>s;
    if(s[0]=='-') cout<<s.size()-1<<endl;
    else cout<<s.size()<<endl;
}
int main(){
    ll t;cin>>t;
    while(t--) solve();
}
