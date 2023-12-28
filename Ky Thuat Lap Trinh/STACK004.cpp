#include <stack>
#include <string>
#include <iostream>

using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		stack<char>st1;
		st1.push(s[0]);
		for (int i=1;i<s.size();i++){
		
			if (!st1.empty() && (isupper(s[i]) && tolower(s[i])==st1.top())){
				st1.pop();
			}
			else if (!st1.empty()&& (islower(s[i])&& toupper(s[i])==st1.top())){
				st1.pop();
			}
			else {
				st1.push(s[i]);
			}
		}
		string t="";
		while (st1.size()){
			char x=st1.top();
			st1.pop();
			t=x+t;
		}
		cout<<t<<endl;
	
	}
}
