#include<bits/stdc++.h>
using namespace std;
const int m=1e6+5;
int a[m];
void sang(){
	for(int i=2;i<m;i++){
		a[i]=1;
	}
	for(int i=2;i<sqrt(m);i++){
		if(a[i]==1){
			for(int j=i*i;j<m;j+=i){
				a[j]=0;
			}
		}
	}
}
int main(){
	int t;
	cin>>t;
	sang();
	while (t--){
		int x,y;
		cin>>x>>y;
		int dem=0;
		for(int i=x;i<=y;i++){
			if(a[i]==1) dem++;
		}
		cout<<dem<<endl;
		

	}
}
