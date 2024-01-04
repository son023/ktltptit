#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
ll n,k;
struct matran{
	ll f[20][20];
};
matran operator*(matran a, matran b){
	matran c;
	for(ll i=0;i<n;i++){
		for(ll j=0;j<n;j++){
			c.f[i][j]=0;
			for(ll k=0;k<n;k++){
				c.f[i][j]+=a.f[i][k]*b.f[k][j];
				c.f[i][j]%=mod;
			}
		}
	}
	return c;
}
matran Try(matran a,ll b){
	if(b==1) return a;
	matran x=Try(a,b/2);
	if(b%2==0) return x*x;
	else return (a*x)*x;
}
void solve(){
	cin>>n>>k;
	matran a;
	for(ll i=0;i<n;i++){
		for(ll j=0;j<n;j++){
			cin>>a.f[i][j];
		}
	}
	matran x=Try(a,k);
	for(ll i=0;i<n;i++){
		for(ll j=0;j<n;j++){
			cout<<x.f[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
int main(){
	ll t;cin>>t;
	while(t--) solve();
}
