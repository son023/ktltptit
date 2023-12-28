#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	long long n;
	while(t--){
		cin>>n;
		long long dem=0;
		while (n!=0){
			dem+=n/5;
			n/=5;
		}
		cout<<dem<<endl;

	}
}
