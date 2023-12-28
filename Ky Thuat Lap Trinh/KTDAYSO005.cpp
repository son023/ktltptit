#include<bits/stdc++.h>
using namespace std;
long long dem[1000005];
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long a[n];
        for(int i=0;i<1000005;i++) dem[i]=0;
		for (long long i=0; i<n; i++){
			cin>>a[i];
		}
		for (long long i=0; i<n; i++){
			dem[a[i]]++;
		}
		long long x=0;
		for (long long i=0; i<n; i++){
			if (dem[a[i]]==1){
				x++;
			}
		}
		cout<<x<<endl;

	}
}
