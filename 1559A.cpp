#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	int t;
	 cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<long long int> v(n);
	    long long int ans=0;

	    for(int i=0;i<n;i++){
	        cin >> v[i];
        if(i==0) ans=v[i];
        else ans= ans&v[i];
	    }

	    cout << ans << endl;
	    
	}
	return 0;

}
