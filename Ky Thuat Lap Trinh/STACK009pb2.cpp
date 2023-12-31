#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
	string s;cin>>s;
	stack<string> st;
	for(auto i:s){
		if(i!=']') st.push(string(1,i));
		else{
			string v="",tmp="";
			while(st.top()!="["){
				tmp=st.top()+tmp;
				st.pop();
			}
			st.pop();
			ll x=stoll(st.top());st.pop();
			while(x--) v+=tmp;
			st.push(v);
			
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
