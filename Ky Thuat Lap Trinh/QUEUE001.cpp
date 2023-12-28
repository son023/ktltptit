#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
	string s;cin>>s;
	map<char,ll> mp;
	for(auto i:s) mp[i]++;
	ll ok=0;
	for(ll i=0;i<s.size();i++){
		if(mp[s[i]]==1){
			ok=1;
			cout<<i<<endl;
			break;
		}
	}
	if(!ok) cout<<-1<<endl;
}
int main(){
	int t;cin>>t;
	while(t--){
		solve();
	}
}
