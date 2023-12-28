#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	while (n--){
	string s,t;
	cin>>s>>t;
	while (s.size()<t.size()) s="0"+s;
	while(t.size()<s.size()) t="0"+t;
	string kq="";
	int nho=0;
	for (int i=s.size()-1; i>=0;i--){
		int tong=(t[i]-'0')+(s[i]-'0');
		tong=tong+nho;
		if (tong>9){
			nho=1;
		}
		else nho=0;
		kq=to_string(tong%10)+kq;
	}
	if (nho==1){
		kq="1"+kq;
	}
	cout<<kq<<endl;
}
}
