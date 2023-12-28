#include<bits/stdc++.h>
using namespace std;
int f[501][501];
int main(){
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		int n=a.size(),m=b.size();
		for (int i=0;i<n;i++){
			for (int j=0; j<m; j++){
				if (a[i]==b[j]) f[i+1][j+1]=f[i][j]+1;
				else f[i+1][j+1]=max(f[i][j+1],f[i+1][j]);
			}
		}
		cout<<n+m-f[n][m]<<endl;
	}
}
