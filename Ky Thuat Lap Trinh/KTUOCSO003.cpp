#include<bits/stdc++.h>
using namespace std;
vector<int> v;
bool nto(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return n>1;
}
void luunt(){
	for(int i=2;i<100;i++){
		if(nto(i)) v.push_back(i);
	}
}

int main(){
	int t;cin>>t;
	luunt();
	vector<long long> kq;
	for(int x:v){
	   long long y=pow(2,x-1)*(pow(2,x)-1);
	   kq.push_back(y);  
	}
	while(t--){
		long long x;cin>>x;
		bool check=false;
		for(long long i:kq){
			if(x==i) check=true;
		}
		if(!check) cout<<"0\n";
		else cout<<"1\n";
		
	}
}
