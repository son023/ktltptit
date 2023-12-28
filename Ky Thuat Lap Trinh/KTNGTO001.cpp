#include<bits/stdc++.h>
using namespace std;
bool nto(int n){
	int dem=0;
	int dem1=0;
	while(n!=0){
		dem++;
		int x=n%10;
		if (x==2||x==3||x==5||x==7){
			dem1++;
		}
		n/=10;
	}
	if (dem1==dem){
		return true;
	}
	else {
		return false;
	}
}
bool check(int n){
	if (n<2) return false;
	for(int i=2; i<=sqrt(n);i++){
		if (n%i==0) return false;
	}
	return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int dem=0;
		for (int i=2;i<=n; i++){
			if (nto(i) && check(i)){
				dem++;
			}
		}
		cout<<dem<<endl;
	}
}
