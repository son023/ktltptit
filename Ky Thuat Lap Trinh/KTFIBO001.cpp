#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;cin>>t;
	ll f[93];
	f[1]=1;
	for(ll i=2;i<92;i++){
		f[i]=f[i-1]+f[i-2];
	}
	while(t--){
		ll n;cin>>n;
		if(n==1){
			cout<<4<<endl;
			continue;
		}
		ll dem=0;
		for(ll i=1;i<92;i++){
			if(f[i]-i+1>=n){
				dem=i;
				break;
			}
		}
		cout<<n+dem-2<<endl;
	}
}
