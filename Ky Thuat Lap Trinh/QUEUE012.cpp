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
	set<ll> check,check2;
	vector<ll> v,y;
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
		ll x=stoll(tmp);
		if(check2.find(x)==check2.end()){
			check2.insert(x);
			y.push_back(x);
		}
	}
	vector<ll> kq;
	for(auto i:v){
		kq.push_back(i);
	}
	for(auto i:y){
		if(check.find(i)==check.end()){
			kq.push_back(i);
		}
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
