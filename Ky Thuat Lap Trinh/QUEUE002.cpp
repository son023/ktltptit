#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
	string s;getline(cin,s);
	vector<char> v;
	queue<char> q;
	stack<char> st;
	for(int i=0;i<s.size();i++){
		if(s[i]==',') s[i]=' ';
	}
	stringstream ss(s);
	string tmp;
	while(ss>>tmp){
		v.push_back(tmp[0]);
	}
	for(ll i=0;i<v.size()/2;i++) q.push(v[i]);
	for(ll i=v.size()-1;i>=v.size()/2;i--) st.push(v[i]);
	ll dem=0;
	while(dem<q.size()){
		if(q.front()==st.top()){
			q.pop();
			st.pop();
			dem=0;
		}
		else{
			q.push(q.front());
			q.pop();
			dem++;
		}
		
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
