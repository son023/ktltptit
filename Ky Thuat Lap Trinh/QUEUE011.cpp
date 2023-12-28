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
	priority_queue<ll,vector<ll>,greater<ll>>q;
	for(auto i:v) q.push(i);
	cout<<q.top()<<endl;
}
int main(){
	int t;cin>>t;
	cin.ignore();
	while(t--){
		solve();
	}
}
