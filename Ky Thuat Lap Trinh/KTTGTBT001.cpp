#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int n;
	float x;
	while(t--){
		cin>>n>>x;
		float sum=0;
		for(int i=1; i<=n;i++){
			float tong1=0;
			tong1=pow(x,i);
			int tong2=0;
			for (int j=1; j<=i; j++){
				tong2+=j;
			}
			sum+=tong1/(float)tong2;
		}
		cout<<fixed<<setprecision(3)<<sum<<endl;
	}
}
