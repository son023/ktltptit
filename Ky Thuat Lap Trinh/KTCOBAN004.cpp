#include<bits/stdc++.h>
using namespace std;
const int m=1e6+5;

int main(){
	int t;
	cin>>t;
	while (t--){
		long long n;cin>>n;
		if(n==1){
			cout<<9<<endl;
			continue;
		}
		long long a=pow(10,n/2-1), b=pow(10,n/2)-1;
		if(n%2==0) cout<<b-a+1<<endl;
		else cout<<(b-a+1)*10<<endl;
		
		

	}
}
