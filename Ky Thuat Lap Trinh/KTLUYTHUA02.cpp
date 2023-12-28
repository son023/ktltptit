#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
long long luythua(int a, int n){
	if (n==0) return 1;
	long long x=luythua(a,n/2);
	if (n%2==1) return (a*x%MOD*x)%MOD;
	else return (x*x)%MOD;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,n;
		cin>>a>>n;
		cout<<luythua(a,n)<<endl;
	}
}
