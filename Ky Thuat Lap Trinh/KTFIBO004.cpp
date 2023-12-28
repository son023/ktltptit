#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll t;cin>>t;
	ll f[92];
	f[1]=1;
	map<ll,ll> mp;
	mp[0]=1;
	mp[1]=1;
	for(ll i=2;i<92;i++){
	
		f[i]=f[i-1]+f[i-2];
		mp[f[i]]=1;
	}
		
	while(t--){
		ll n;cin>>n;
		ll ok=0;
		for(ll i=0;i<92;i++){
			if(mp[n-f[i]]==1){
				cout<<f[i]<<" "<<n-f[i]<<endl;
				ok=1;
				break;
			}
		}
		if(!ok) cout<<-1<<endl;
		
	}
}
