#include<bits/stdc++.h>
using namespace std ;

int n ;
const int N = 1e5 + 1 ;
int dp[N] = {0} ;
int main () {
	cin >> n ;
	vector<int> v (n) ;
	for (auto &i : v) {
		cin >> i ;
	}
	for (int i = 1 ; i < n ; ++i) {
		if (v[i-1] > v[i]) {
			dp[i] = dp[i-1] + 1 ;
		} else {
			dp[i] = dp[i-1] ;
		}
	}
	cout << dp[n-1] ;
	return 0 ;
}
