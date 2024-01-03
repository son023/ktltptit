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
	ll n;cin>>n;
	ll i=n;
	while(true){
		if(i%2!=0){
			if(prime(i) && prime(i-2)){
					cout<<i;
					return;
				
			}
		}
		i++;
	}
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
		cout<<"\n";
	}
}
