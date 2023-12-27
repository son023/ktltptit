#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int m=1e9+7;
ll a,n;
ll Try(ll n,ll a){
	if(n==1) return a;
	ll x=Try(n/2,a);
	if(n%2==0) return x*x%m;
	else return x*x%m*a%m;
}
void solve(){
	cin>>a>>n;
	cout<<Try(n,a)<<endl;
	
	
}
int main(){
	int t;cin>>t;
	while(t--) solve();
}
