#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	long long n;
	while(t--){
		cin>>n;
		int dem=0;
		long long tmp=n;
		for(int i=2;i<=sqrt(n);i++){
			if(tmp%i==0){
				while(tmp%i==0){
					tmp/=i;
				}
				dem++;
			}
		
		}
		if(tmp>1) dem++;
		cout<<dem<<endl;
	}
}
