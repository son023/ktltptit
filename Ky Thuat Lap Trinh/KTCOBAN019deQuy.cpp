#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll Try(ll n){
	if(n<=1) return 1;
	ll x=sqrt(n);
	ll a=n%2+Try(n/2), b=n%3+Try(n/3), c=n-x*x+Try(x);
	return 1+min({a,b,c});
}
void solve(){
	ll n;cin>>n;
	cout<<Try(n)<<endl;
}
int main(){
	int t;cin>>t;
	while(t--) solve();
}
