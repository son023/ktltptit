#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y,m;
		cin>>x>>y>>m;
		int a=m/x;
		int sum=m/x;
		while((a/y)>0){
			sum+=a/y;
			a=a%y+a/y;
		}
		cout<<sum<<endl;

	}
}
