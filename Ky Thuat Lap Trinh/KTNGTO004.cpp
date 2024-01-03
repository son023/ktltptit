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
void solve(){
	ll dem=-1;
    ll n;cin>>n;
    if(prime(n)) {
        cout<<n;
        return;
    }
    for(ll i=2;i<=sqrt(n);i++){
        while(n%i==0){
            n/=i;
            dem=i;
        }
    }
    if(n>1) dem=n;
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
