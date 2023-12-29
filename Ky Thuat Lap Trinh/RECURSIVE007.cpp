#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool prime(ll n){
	for(ll i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return n>1;
}
ll sum(ll n,ll start){
	if(n<start) return 0;
	if(prime(n)){
		return n+sum(n-1,start);
	}
	else{
		return sum(n-1,start);
	}
}
void solve(){
	ll a,b;
	cin>>a>>b;
	cout<<sum(b,a)<<endl;
}
int main(){
	int t;cin>>t;
	while(t--) solve();
}
