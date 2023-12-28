#include<bits/stdc++.h>
using namespace std;
void solve(){
	long long fibo[100];
	fibo[0]=0;
	fibo[1]=1;
	for (int i=2;i<=92;i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
	long long n;
	cin>>n;
	cout<<fibo[n]<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
