#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
	queue<pair<ll,ll>> q;
	ll n;cin>>n;
	q.push({n,0});
	while(true){
		auto x=q.front();
		q.pop();
		if(x.first==1){
			cout<<x.second<<endl;
			return;
		}
		if(x.first%2==0) q.push({x.first/2,x.second+1});
		if(x.first%3==0) q.push({x.first/3,x.second+1});
		q.push({x.first-1,x.second+1});
	}
}
int main(){
	int t;cin>>t;
	while(t--) solve();
}
