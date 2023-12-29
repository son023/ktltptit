#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(string s){
	ll l=0,r=s.size()-1;
	while(l<=r){
		if(s[l]!=s[r]) return false;
		l++;
		r--;
	}
	return true;
}
void solve(){
	string s;cin>>s;
	if(check(s)) cout<<1<<endl;
	else cout<<0<<endl;

}
int main(){
	int t;cin>>t;
	while(t--) solve();
}
