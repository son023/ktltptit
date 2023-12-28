#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;
bool check(ll x,ll y) {
	if(y-x+1>3 || y-x+1<1) return false;
	string tmp="";
	for(ll i=x;i<=y;i++){
		tmp+=s[i];
	}
    if(tmp[0]=='0'){
        if(tmp.size()==1) return true;
        return false;
    }
    ll ok=stoll(tmp);
    if(ok>0 && ok<256) return true;
    return false;
}
int main() {
	ll t;
	cin>>t;
	while(t--) {
		cin>>s;
		ll dem=0;
		if (s.size()<4 || s.size()>12) continue;
		for (ll i=0; i<s.size(); i++) {
			for (ll j=i+1; j<s.size(); j++) {
				for (ll p=j+1; p<s.size(); p++) {
					if(check(0,i-1) && check(i,j-1) && check(j,p-1) && check(p,s.size()-1)) dem++;
				}
			}
		}
		cout<<dem<<endl;
	}

}
