#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		float x;
		cin>>n>>x;
		float sum=0;
		for (int i=1; i<=n; i++){
			float a=pow(x,i);
			float tich=1;
			for (int j=1; j<=i; j++){
				tich*=1/(float)j;
			}
			sum+=a*tich;
		}
		cout<<fixed<<setprecision(3)<<sum<<" "<<endl;
	}
}
