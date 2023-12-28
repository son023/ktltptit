#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int n;
	while(t--){
		cin>>n;
		int sum=0;
		int x=(int) sqrt(n);
		if(n==1) cout<<"0\n";
		else {
			for (int i=1; i<=x; i++){
				if (n%i==0){
					sum+=i;
					if (i!=n/i && (n/i)<n){
						sum+=n/i;
					}
				}
			}
			cout<<sum<<endl;
		}

	}
}
