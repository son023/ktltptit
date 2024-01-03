#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
void solve(){
	priority_queue<ll,vector<ll>,greater<ll>> q;
	ll n;cin>>n;
	for(ll i=0;i<n;i++){
		ll x;cin>>x;
		q.push(x);
	}
	ll sum=0;
	while(q.size()>1){
		ll a=q.top();q.pop();
		ll b=q.top();q.pop();
		sum=(sum+a+b)%mod;
		q.push(a+b);
	}
	cout<<sum<<endl;
	
	
}
int main(){
	ll t;cin>>t;
	while(t--) solve();
}
