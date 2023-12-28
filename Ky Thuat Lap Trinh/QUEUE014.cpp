#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(string s1,string s2){
	if(s1.size()!=s2.size()) return false;
	for(ll i=0;i<s1.size();i++){
		if(s1[i]!=s2[i]) return false;
	}
	return true;
}
void solve(){
	string s1,s2;
	cin>>s1>>s2;
	if(check(s1,s2)) cout<<1<<endl;
	else cout<<0<<endl;
	
}
int main(){
	int t;cin>>t;
	while(t--){
		solve();
	}
}
