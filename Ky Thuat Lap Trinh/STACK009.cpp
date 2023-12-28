#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int m[100000];
void bacDauNgoac(string s){
	stack<int> st1;
	for(int i=0;i<s.size();i++){
			if(s[i]=='[') st1.push(i);
			else if (s[i]==']'){
				m[i]=st1.size();
				m[st1.top()]=st1.size();
				st1.pop();
			}	
		}
}
int main(){
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		bool check=false;
		string v="";
		while(!check){
			memset(m,0,sizeof(m));
			bacDauNgoac(s);
			check=true;
			v="";
			int i=0;
			while(i<s.size()){
				if(isdigit(s[i])){
					check=false;
					int x=s[i]-'0';
					string tmp="";
					i++;
					int j=i+1;
					while(j<s.size()){
						if(s[j]==']' && m[i]==m[j]) break;
						tmp+=s[j];
						j++;
					}
					i=j;
					while(x--){
						v+=tmp;
					}
				}
				else v+=s[i];	
				i++;	
			}
			s=v;
		}
		cout<<v<<endl;		
	}
}
