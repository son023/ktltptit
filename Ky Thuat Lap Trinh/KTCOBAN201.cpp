#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(string s){
	//1
	if(s.size()<8) return false;
	ll x=0,y=0,z=0,t=0;
	//2
	for(auto i:s){
		if(isupper(i)) x=1;
		 if(islower(i)) y=1;
		 if(isdigit(i)) z=1;
        if(isalnum(i)) t=1;	
	}
	if(!x || !y || !z || !t) return false;
	for(ll i=0;i<s.size()-1;i++){
		if(tolower(s[i])==tolower(s[i+1])) return false;
	}
	return true;	
}
int main(){
	ifstream inputFile;
	ofstream outputFile;
	inputFile.open("password.in.txt");
	outputFile.open("res.out.txt");
	string s;
	while(inputFile>>s){
		if(check(s)) outputFile<<"VALID\n";
		else outputFile<<"INVALID\n";
	}
    inputFile.close();
    outputFile.close();
    
}
