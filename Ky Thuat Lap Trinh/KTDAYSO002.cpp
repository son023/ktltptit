#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,k,s;
ll a[200],b[200];
bool final=false;
void sinh(){
	ll i=k;
	while(i>0 && b[i]==n-k+i){
		i--;
	}
	if(i==0) final=true;
	else{
		b[i]++;
		for(ll j=i+1;j<=k;j++){
			b[j]=b[j-1]+1;
		}
	}
}
void solve(){
	cin>>n>>k>>s;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	for(ll i=1;i<=k;i++){
		b[i]=i;
	}
	final=false;
	ll dem=0;
	while(!final){
		ll sum=0;
		for(ll i=1;i<=k;i++){
			sum+=a[b[i]];
		}
		if(sum==s) dem++;
		sinh();
	}
	cout<<dem<<endl;
	
}
int main(){
	int t;cin>>t;
	while(t--){
		solve();
	}
}
