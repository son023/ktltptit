#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll lon(string x,string y){
    for(ll i=0;i<x.size();i++){
        if(x[i]=='3') x[i]='5';
    }
    for(ll i=0;i<y.size();i++){
        if(y[i]=='3') y[i]='5';
    }
    return stoll(x)+stoll(y);
    
}
ll be(string x,string y){
    for(ll i=0;i<x.size();i++){
        if(x[i]=='5') x[i]='3';
    }
    for(ll i=0;i<y.size();i++){
        if(y[i]=='5') y[i]='3';
    }
    return stoll(x)+stoll(y);
    
}
void solve(){
    string x,y;cin>>x>>y;
    cout<<be(x,y)<<" "<<lon(x,y)<<endl;
    
}
int main(){
    ll t;cin>>t;
    while(t--) solve();
}
