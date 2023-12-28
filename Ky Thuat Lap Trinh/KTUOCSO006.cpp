#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		long long sum1=0;
		for (int i=1; i<=sqrt(a); i++){
			if (a%i==0){
				sum1+=i;
				if (i!=a/i&& a/i<a){
					sum1+=a/i;
				}
			}
		}
		long long sum2=0;
		for (int i=1; i<=sqrt(b); i++){
			if (b%i==0){
				sum2+=i;
				if (i!=b/i&& b/i<b){
					sum2+=b/i;
				}
			}
		}
		if (sum1==b && sum2==a){
			cout<<"YES\n";
		}
		else {
			cout<<"NO\n";
		}
	}
}
