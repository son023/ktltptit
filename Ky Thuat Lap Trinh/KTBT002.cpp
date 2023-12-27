#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(vector<ll> a,vector<ll> b){
	for(int i=0;i<a.size();i++){
		if(a[i]>b[i]) return true;
		else if(a[i]<b[i]) return false;
	}
	return true;
}
void khoangCach(vector<ll> a,vector<ll> b){
	ll dem=0;
	do{
		ll check1=0,check2=0;
		for(ll i=0;i<a.size();i++){
			if(a[i]!=b[i]) check1=1;
		}
		if(!check1) {
			cout<<dem<<endl;
			break;
		}
		dem+=1;
	}while(next_permutation(a.begin(),a.end()));
}
void solve(){
	ll n;cin>>n;
	vector<ll> a,b;
	for(ll i=1;i<=n;i++){
		ll x;cin>>x;
		a.push_back(x);
	}
	for(ll i=1;i<=n;i++){
		ll x;cin>>x;
		b.push_back(x);
	}
	if(check(a,b)) khoangCach(b,a);
	else khoangCach(a,b);
	
	
}
int main(){
	int t;cin>>t;
	while(t--) solve();
}
