#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[10000005];
int main(){
	ll n;cin>>n;
	for(ll i=0;i<n;i++) cin>>a[i];
	ll x=a[1]-a[0];
	ll c=0;
	for(ll i=2;i<n;i++){
		if(a[i]-a[i-1]!=x) {
			c=1;
			break;
		}
	}
	if(!c) cout<<"YES\n";
	else cout<<"NO\n";
}
