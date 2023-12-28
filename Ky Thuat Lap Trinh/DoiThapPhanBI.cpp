#include<bits/stdc++.h>
using namespace std;
void convert(long long n){
	if (n==0) return;
	convert(n/2);
	cout<<n%2;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		convert(n);
		cout<<endl;
	}
}
