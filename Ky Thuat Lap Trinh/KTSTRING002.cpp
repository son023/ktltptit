#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		string n="";
		int i=0;
		while (i<=s.size()){
			if(s[i]=='"'){
				i++;
				while (s[i]!='"'){
					n+=s[i];
					i++;
				}
			}
			i++;
		}
		if (n[0]=='?'){
			if (n[1]<='3'||n[1]=='?') n[0]='2';
			else n[0]='1';
		}
		if (n[1]=='?'){
			if (n[0]=='2') n[1]='3';
			else n[1]='9';
		}
		if (n[3]=='?') n[3]='5';
		if (n[4]=='?') n[4]='9';
		n='"'+n+'"';

		for (auto x:n){
		cout<<x;
	}
	cout<<endl;

	}
}
