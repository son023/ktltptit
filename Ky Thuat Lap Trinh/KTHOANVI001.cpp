#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
    int n;
	while (t--) {
		vector<int> a;
		cin>>n;
		for(int i=1; i<=n; i++) {
			a.push_back(i);
		}
		do{
			for(int i=0;i<a.size();i++){
                cout<<a[i];
                if(i<n-1) cout<<" ";
                else cout<<endl;
            }
		}while (next_permutation(a.begin(),a.end()));
        

	}
}
