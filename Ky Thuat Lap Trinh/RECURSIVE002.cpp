#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll check(ll n){
	if(n<4) return n;
	if(n%4!=0) return 0;
	else return check(n/4);
}
void solve(){
	ll n;cin>>n;
	if(check(n)==1) cout<<1<<endl;
	else cout<<0<<endl;
}
int main(){
	int t;cin>>t;
	while(t--) solve();
}
