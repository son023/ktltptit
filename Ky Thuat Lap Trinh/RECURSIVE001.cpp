#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll sum(vector<ll> v,ll size){
	if(size==1) return v[0]; 
	ll x=v[v.size()-1];
	v.pop_back();
	return x+sum(v,size-1);
}
void solve(){
	string s;cin>>s;
	for(ll i=0;i<s.size();i++){
		if(s[i]==',') s[i]=' ';
	}
	vector<ll> v;
	stringstream ss(s);
	string tmp;
	while(ss>>tmp){
		v.push_back(stoll(tmp));
	}
	cout<<sum(v,v.size())<<endl;
}
int main(){
	int t;cin>>t;
	while(t--) solve();
}
