#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[n], b[m];
	for (int i=1; i<=n; i++){
		cin>>a[i];
	}
	for (int j=1; j<=m; j++){
		cin>>b[j];
	}
	for (int j=1; j<=m; j++){
		int dem=0;
		for (int i=1; i<=n; i++){
			if (b[j]==a[i]){
				cout<<i<<" ";
				dem++;
				break;
			}
		}
		if (dem==0){
			cout<<"0"<<" ";
		}
	}
}
