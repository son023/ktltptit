#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a,ll b){
	if(a==0) return b;
	else return gcd(b,a%b);
}
void solve(){
	ll a,b;cin>>a>>b;
    cout<<gcd(a,b)<<endl;
}
int main(){
	int t;cin>>t;
	while(t--) solve();
}
