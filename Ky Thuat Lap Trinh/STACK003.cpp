#include <string>

#include <stack>

#include <iostream>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s,t;
		cin>>s>>t;
		stack<char>st1,st2;
		for (int i=0; i<s.size(); i++){
			if (isalpha(s[i])){
				st1.push(s[i]);
			}
			else {
				if (!st1.empty()){
					st1.pop();
				}
			}
		}
		for (int i=0; i<t.size(); i++){
			if (isalpha(t[i])){
				st2.push(t[i]);
			}
			else {
				if (!st2.empty()){
					st2.pop();
				}
			}
		}
		bool check=false;
		while (st1.size() && st2.size()){
			char x=st1.top();
			st1.pop();
			char y=st2.top();
			st2.pop();		
			if (x!=y){
				check=true;
				break;
			}			
			}
		if (check) cout<<"0\n";
		else {
			if (st1.empty()&& st2.empty()) cout<< "1\n";
			else cout<<"0\n";
		}
		
		}
}
