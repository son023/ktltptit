#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");
    ll n;
    map<ll,string> mp;
    ll dem=0;
    for(char i='A';i<='Z';i++){
        mp[dem]=string(1,i);
        dem++;
    }
    while(inputFile>>n){
        string v="";
        while(n>0){
            n-=1;
            ll x=n%26;
            v=mp[x]+v;
            n/=26;
        }
        outputFile<<v<<endl;     
    }
}
