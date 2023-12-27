#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,k,a[30];
bool final=false;
void ktao(){
	cin>>n>>k;
	for(ll i=1;i<=k;i++){
		a[i]=i;
	}
}
void sinh(){
	ll i=k;
	while(i>0 && a[i]==n-k+i){
		i--;
	}
	if(i==0) final=true;
	else{
		a[i]++;
		for(ll j=i+1;j<=k;j++)
		{
			a[j]=a[j-1]+1;
		}
	}
}
void solve(){
	ktao();
	final=false;
	vector<vector<ll>> v;
	while(!final){
		vector<ll> tmp;
		for(ll i=1;i<=k;i++){
			tmp.push_back(a[i]);
		}
		v.push_back(tmp);
		sinh();	
	}
	cout<<v.size()<<"\n";
	for(auto i:v){
		cout<<"[";
		for(ll j=0;j<i.size()-1;j++){
			cout<<i[j]<<" ";
		}
		cout<<i[i.size()-1]<<"]\n";
	}
}
int main(){
	int t;cin>>t;
	while(t--) solve();
}
