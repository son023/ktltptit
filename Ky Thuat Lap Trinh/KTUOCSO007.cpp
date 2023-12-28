#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,m;
        cin>>n>>m;
        int x=(long long)sqrt(n);
        long long sum=0;
        for (int i=1; i<=x; i++){
        	if (n%i==0){
        		if (m%i!=0){
        			sum+=i;
				}
				if (i!=(n/i)){
					if (m%(n/i)!=0){
						sum+=n/i;
					}
				}
			}
			}
			cout<<sum<<endl;
		}
}
