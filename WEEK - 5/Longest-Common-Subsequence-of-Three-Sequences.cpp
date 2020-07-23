#include<bits/stdc++.h>
using namespace std ;

int dp[101][101][101] ;
int a[101] , b[101] , c[101] ;
int n , m , l ;

int main() {
	cin >> n ;
	int a[n+1] ;
	for (int i = 1 ; i <= n ; ++i) {
		cin >> a[i] ;
	}
	cin >> m ;
	int b[m+1] ;
	for (int i = 1 ; i <= m ; ++i) {
		cin >> b[i] ;
	}
	cin >> l ;
	int c[l+1] ;
	for (int i = 1 ; i <= l ; ++i) {
		cin >> c[i] ;
	}
	memset(dp , 0 , sizeof(dp)) ;
	for (int i = 1 ; i <= n ; ++i) {
		for (int j = 1 ; j <= m ; ++j) {
			for (int k = 1 ; k <= l ; ++k) {
				if (a[i] == b[j] && a[i] == c[k]) {
					dp[i][j][k] = 1 + dp[i-1][j-1][k-1] ;
				} else {
					dp[i][j][k] = max ({dp[i-1][j][k] , dp[i][j-1][k] , dp[i][j][k-1]}) ;
				}
			}
		}
	}
	cout << dp[n][m][l] ;
	return 0 ;
}
