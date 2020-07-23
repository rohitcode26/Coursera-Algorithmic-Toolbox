#include<bits/stdc++.h>
using namespace std ;

int dp[101][101] ;

int main () {
	string a , b ;
	cin >> a >> b ;
	int len1 = a.length() , len2 = b.length() ;
	memset(dp , 0 , sizeof(dp)) ;
	for (int i = 0 ; i <= len1 ; ++i) {
		dp[i][0] = i ;
	}
	for (int i = 0 ; i <= len2 ; ++i) {
		dp[0][i] = i ;
	}
	for (int i = 1 ; i <= len1 ; ++i) {
		for (int j = 1 ; j <= len2 ; ++j) {
			if (a[i-1] == b[j-1]) {
				dp[i][j] = dp[i-1][j-1] ;
			} else {
				dp[i][j] = 1 + min({dp[i-1][j] , dp[i][j-1] , dp[i-1][j-1]}) ;
			}
		}
	}
	cout << dp[len1][len2] ;
	return 0 ;
}
