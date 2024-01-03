#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int m=1e9+7;
ll a[1000005];
ll ok=0;
ll Try(ll n){
	if(n==1) return 1;
	ll x=0;
	for(ll i=1;i<n;i++){
		x+=Try(i)
	}
}
void solve(){
	cin>>n;
	a[0]=n;
	ok=0;
	Try(1,0);
	cout<<ok-1<<endl;
	
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
        
	}
}
