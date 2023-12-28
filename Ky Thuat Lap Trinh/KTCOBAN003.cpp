#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--){
		long long l,r;
		cin>>l>>r;
	    long long a=(long long)sqrt(l),b=(long long)(sqrt(r));
	    if (a*a<l) a++;
	    if(b*b>r) b--;
	    cout<<b-a+1<<endl;

	}
}
