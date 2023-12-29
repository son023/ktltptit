#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
	string s;cin>>s;
	ll tich=1;
	for(ll i=0;i<s.size();i++){
		if(s[i]==',') s[i]=' ';
	}
	vector<ll> v;
	stringstream ss(s);
	string tmp;
	while(ss>>tmp){
		v.push_back(stoll(tmp));
		tich*=stoll(tmp);
	}
	vector<ll> kq;
	for(auto i:v){
		kq.push_back(tich/i);
	}
	for(ll i=0;i<kq.size()-1;i++){
		cout<<kq[i]<<",";
	}
	cout<<kq[kq.size()-1]<<endl;
}
int main(){
	int t;cin>>t;
	while(t--) solve();
}
