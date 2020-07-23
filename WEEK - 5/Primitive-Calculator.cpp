#include<bits/stdc++.h>
using namespace std ;

#define pb push_back

int dp[1e6+1] ;

int main () {
	int n ;
	cin >> n ;
	memset (dp , 0 , sizeof(dp)) ;
	vector <int> ans ;
	for(int i = 2 ; i <= n ; ++i) {
		dp[i] = dp[i-1] + 1 ;
		ans.pb(i-1) ;
		if(i%2 == 0) {
			dp[i] = min(dp[i] , dp[i/2] + 1) ;
		}
		if(i % 3 == 0) {
			dp[i] = min(dp[i] , dp[i/3] + 1) ;
		}
	}
	cout << dp[n] ;
	for (auto &i : ans) {
		cout << i << ' ' ;
	}
	return 0 ;
}
