#include<bits/stdc++.h>
using namespace std ;

vector <int> dp ;

int main () {
	int n ;
	cin >> n ;
	dp = vector <int> (n+1 , INT_MAX) ;
	dp[0] = 0 ;
	dp[1] = 1 ;
	dp[2] = 2 ;
	dp[3] = 1 ;
	dp[4] = 1 ;
	for (int i = 5 ; i <= n ; ++i) {
		dp[i] = 1 + min ({dp[i-1] , dp[i-3] , dp[i-4]}) ;
	}
	cout << dp[n] ;
	return 0 ;
}
