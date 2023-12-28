#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long l,r;
		cin>>l>>r;
		long long sum=0;
		if (l%2==0){
			if (r%2==0){
				sum+=((l+r)/2)*(r-l)/2;
				cout<<sum<<endl;
			}
			else {
				sum+=((l+r+1)/2)*((r-l+1)/2);
				cout<<sum<<endl;
			}
		}
		else{
			if (r%2==0){
				sum+=((l+r-1)/2)*(r-l+1)/2;
				cout<<sum<<endl;
			}
			else {
				sum+=((l+r)/2)*((r-l+2)/2);
				cout<<sum<<endl;
			}

		}
	}
}
