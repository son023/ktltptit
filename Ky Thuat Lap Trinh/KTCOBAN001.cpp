#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;cin>>t;
	while(t--){
		long long n;
		cin>>n;
		int dem=0;
		long long temp=n;
		while (n!=0){
			dem++;
			n/=10;
		}
		long long sum=0;
		long long m=temp;
		while(temp!=0){
			int x=temp%10;
			sum+=pow(x,dem);
			temp/=10;
		}
		if (sum==m){
			cout<<"1\n";
		}
		else {
			cout<<"0\n";
		}
	}
}
