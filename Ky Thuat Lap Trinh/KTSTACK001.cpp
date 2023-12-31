#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
	string s;cin>>s;
	stack<char> st;
	for(auto i:s){
		
		if(st.size() && i==']' && st.top()=='[') st.pop();
		else if(st.size() && i==')' && st.top()=='(') st.pop();
		else if(st.size() && i=='}' && st.top()=='{') st.pop();
		else st.push(i);
	}
	if(st.size()==1) cout<<"YES\n";
	else cout<<"NO\n";
}
int main(){
	ll t;cin>>t;
	while(t--) solve();
}
