#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		stack<char>st;
		st.push(s[0]);
		for (int i=1; i<s.size(); i++) {
			if(!st.empty()) {
				char x=st.top();
				if(s[i]==x) {
					st.pop();
				} else {
					st.push(s[i]);
				}
			}
			else{
				st.push(s[i]);
			}
		}
		string a="";
		while(!st.empty()) {
			a=st.top()+a;
			st.pop();
		}
		cout<<a<<endl;
	}
}
