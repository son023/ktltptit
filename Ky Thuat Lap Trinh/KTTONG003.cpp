#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int x=-1e9;
void solve(){
	ll n,m;cin>>n>>m;
	ll a[n+1][m+1];
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	ll dp[n+2][m+2];
	for(ll i=0;i<=n+1;i++){
		for(ll j=0;j<=m+1;j++){
			dp[i][j]=x;
		}
	}
	ll ma=x;
	for(ll j=1;j<=m;j++){
		for(ll i=1;i<=n;i++){
			if(j==1) dp[i][j]=a[i][j];
			else{
				dp[i][j]=max({dp[i-1][j-1],dp[i][j-1],dp[i+1][j-1]})+a[i][j];
			}
			if(j==m){
				if(dp[i][j]>ma) ma=dp[i][j];
			}
		}
	}
	cout<<ma<<endl;
}
int main(){
	int t;cin>>t;
	while(t--) solve();
}
