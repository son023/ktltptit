#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
	string s;
	ll n;
	cin>>s>>n;
	for(int i=0;i<s.size();i++){
		if(s[i]==',') s[i]=' ';
	}
	vector<string> v;
	stringstream ss(s);
	string tmp;
	while(ss>>tmp){
		v.push_back(tmp);
	}
	vector<string> kq;
	for(ll i=n-1;i>=0;i--) kq.push_back(v[i]);
	for(ll i=n;i<v.size();i++) kq.push_back(v[i]);
	for(ll i=0;i<kq.size()-1;i++) cout<<kq[i]<<",";
	cout<<kq[kq.size()-1]<<endl;
}
int main(){
	int t;cin>>t;
	while(t--){
		solve();
	}
}
