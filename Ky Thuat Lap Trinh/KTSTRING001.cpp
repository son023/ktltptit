#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while (t--){
		string s;
		getline(cin,s);
		string child="",parent="";
		int i=0;
		while(i<s.size()){
			if(s[i]=='"'){
				i++;
				while(s[i]!='"'){
					child+=s[i];
					i++;
				}

			}
			i++;
			if(s[i]==',') break;
		}
		while(i<s.size()){
			if(s[i]=='"'){
				i++;
				while(s[i]!='"'){
					parent+=s[i];
					i++;
				}
			}
			i++;
			if(s[i]==',') break;
		}
		if(child.size()==0||parent.size()==0){
			cout<<0<<endl;;
            continue;
		}
		if(parent.find(child)==string::npos){
			cout<<"-1\n";
		}
		else{
			cout<<parent.find(child)<<endl;
		}



	}
}
