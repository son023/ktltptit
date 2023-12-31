#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
	string s;cin>>s;
    stack<string> st;
    for(ll i=s.size()-1;i>=0;i--){
		if(isalpha(s[i])){
			st.push(string(1,s[i]));
		}
		else{
			string x=st.top();st.pop();
    		string y=st.top();st.pop();
    		st.push(x+y+s[i]);
    
		}
	}
	cout<<st.top()<<endl;
	
}
int main(){
	ll t;cin>>t;
	while(t--) solve();
}
