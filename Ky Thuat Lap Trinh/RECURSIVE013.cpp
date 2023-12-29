#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(string s){
	ll l=0,r=s.size()-1;
	while(l<=r){
		if(s[l]!=s[r]) return false;
		l++;
		r--;
	}
	return true;
}
void solve(){
	string s;cin>>s;
	if(s.size()==0) {
		cout<<0<<endl;
		return;
	}
	for(ll i=0;i<s.size();i++){
		if(s[i]==',') s[i]=' ';
	}
	set<ll> v;
	stringstream ss(s);
	string tmp;
	ll ma=-1;
	while(ss>>tmp){
		v.insert(stoll(tmp));
		ma=max(ma,stoll(tmp));
	}
	for(ll i=0;i<=ma;i++){
		if(v.find(i)==v.end()){
			cout<<i<<endl;
			return;
		}
	}
	cout<<ma+1<<endl;
	

}
int main(){
	int t;cin>>t;
	while(t--) solve();
}
