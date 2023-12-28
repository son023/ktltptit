#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
	string s;getline(cin,s);
	for(int i=0;i<s.size();i++){
		if(s[i]==',') s[i]=' ';
	}
	vector<ll> v;
	stringstream ss(s);
	string tmp;
	while(ss>>tmp){
		v.push_back(stoll(tmp));
	}
	ll k=v[v.size()-1];v.pop_back();
	ll dem=0;
	for(ll i=0;i<k;i++){
		if(v[i]<=v[k]) dem+=v[i];
		else dem+=v[k];
	}
	dem+=v[k];
	for(ll i=k+1;i<v.size();i++){
		if(v[i]<v[k]) dem+=v[i];
		else dem+=(v[k]-1);
	}
	cout<<dem<<endl;
}
int main(){
	int t;cin>>t;
	cin.ignore();
	while(t--){
		solve();
	}
}
