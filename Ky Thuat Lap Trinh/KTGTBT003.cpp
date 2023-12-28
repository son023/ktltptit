#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		float sum=0;
		for (int i=1; i<=n; i++){
			long long tich=1;
			for (int j=1; j<=i; j++){
				tich*=j;
			}
			sum=pow(tich+sum,(float)1/(i+1));
		}
		cout<<fixed<<setprecision(3)<<sum<<" "<<endl;
	}
}
