#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
	string s;cin>>s;
	ll sum=0;
	ll x=1;
	for(ll i=s.size()-1;i>=0;i--){
		if(s[i]=='1'){
			sum+=x;
		}
		x*=2;
	}
	cout<<sum<<endl;
}
int main(){
	int t;cin>>t;
	while(t--) solve();
}
