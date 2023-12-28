#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	long long fibo[100];
	fibo[0]=0;
	fibo[1]=1;
	for (int i=2; i<=92; i++){
		fibo[i]=fibo[i-2]+fibo[i-1];
	}
	while (t--){
		int n;
		cin>>n;
		long long sum=0;
		for (int i=0; i<=92; i++){
			if (fibo[i]<=n){
				if (fibo[i]%2==0){
				sum+=fibo[i];
			}
			}
		}
		cout<<sum<<endl;

	}
}
