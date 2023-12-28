#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
	string s;
	cin>>s;
	for(ll i=s.size()-1;i>=0;i--) cout<<s[i];
	cout<<endl;
}
int main(){
	int t;cin>>t;
	while(t--){
		solve();
	}
}
