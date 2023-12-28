#include<bits/stdc++.h>
using namespace std;
void convert(long long n){
	if (n==0) return;
    long long r=n%16;
	convert(n/16);
	if (r<10) cout<<r;
	else {
		cout<<(char)(r+55);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
        
		long long n;
		cin>>n;
        if(n==0){
            cout<<0<<endl;
            continue;
 }
		convert(n);
		cout<<endl;
	}
}
