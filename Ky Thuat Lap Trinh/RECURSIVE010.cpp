#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dem(ll i){
	ll ok=0;
	while(i>0){
		if(i%10==1) ok+=1;
		i/=10;
	}
	return ok;
}
void solve(){
	ll n;cin>>n;
	ll sum=0;
	for(ll i=1;i<=n;i++){
		sum+=dem(i);
	}
	cout<<sum<<endl;
}
int main(){
	int t;cin>>t;
	while(t--) solve();
}
