#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
	string s1,s2;cin>>s1>>s2;
	for(int i=0;i<s1.size();i++){
		if(s1[i]==',') s1[i]=' ';
	}
	for(int i=0;i<s2.size();i++){
		if(s2[i]==',') s2[i]=' ';
	}
	set<ll> check;
	vector<ll> v;
	set<ll> se;
	stringstream ss(s1);
	string tmp;
	while(ss>>tmp){
		ll x=stoll(tmp);
		if(check.find(x)==check.end()){
			check.insert(x);
			v.push_back(x);
		}
	}
	stringstream sss(s2);
	while(sss>>tmp){
		se.insert(stoll(tmp));
	}
	vector<ll> kq;
	for(auto i:v){
		if(se.find(i)!=se.end()) kq.push_back(i);
	}
	if(kq.empty()) cout<<endl;
	else{
		for(ll i=0;i<kq.size()-1;i++){
			cout<<kq[i]<<",";
		}
		cout<<kq[kq.size()-1]<<endl;
	
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		solve();
	}
}
