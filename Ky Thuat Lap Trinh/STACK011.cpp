#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
	string s;cin>>s;
	stack<string> st;
	for(auto i:s){
		if(i!=')') st.push(string(1,i));
		else{
			string v="";
			while(st.top()!="("){
				v=v+st.top();
				st.pop();
			}
			st.pop();
			for(auto x:v) st.push(string(1,x));
		}
	}
	
	string kq="";
	while(st.size()){
		kq=st.top()+kq;
		st.pop();
	}
	cout<<kq<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
        
	}
}
