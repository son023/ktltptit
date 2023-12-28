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
			if (!st.empty()) {
				char x=st.top();
				if (x=='A'&& s[i]=='B') {
					st.pop();
				} else if (x=='C'&& s[i]=='D') {
					st.pop();
				} else {
					st.push(s[i]);
				}
			} else {
				st.push(s[i]);
			}
		}
		cout<<st.size()<<endl;
	}
}
