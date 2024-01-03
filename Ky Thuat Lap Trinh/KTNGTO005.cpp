#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool prime(ll n){
    if(n%2==0) return false;
	for(ll i=3;i<=sqrt(n);i+=2){
		if(n%i==0) return false;
	}
	return n>1;
}
ll tong(ll n){
	if(prime(n)) {
        return n;
    }
    ll dem=-1;
    for(ll i=2;i<=sqrt(n);i++){
        if(n%i==0){
        	if(prime(i)) dem=max(i,dem);
        	if(prime(n/i)) dem=max(n/i,dem);
		}
    }
    return dem;
}
void solve(){
	ll dem=0;
    ll n;cin>>n;
    for(ll i=2;i<=n;i++){
    	dem+=tong(i);
	}
	cout<<dem;
    
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
		cout<<"\n";
	}
}
