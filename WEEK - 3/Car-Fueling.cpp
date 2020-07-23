#include <iostream>
#include <vector>
using namespace std ;
int main () {
	int d , m , n ;
	cin >> d >> m >> n ;
	vector <int> v (n+2) ;
	for (int i = 1 ; i <= n ; ++i) {
		cin >> v[i] ;
	}
	v[0] = 0 ;
	v[n+1] = d ;
	for (int i = 0 ; i <= n ; ++i) {
		if (v[i+1] - v[i] > m) {
			cout << "-1" ;
			return 0 ;
		}
	}
	int ans = 0 ;
	int dis = 0 ;
	for (int i = 1 ; i < n+1 ; ++i) {
		dis += v[i] - v[i-1] ;
		if (m - dis < v[i+1] - v[i]) {
			++ans ;
			dis = 0 ;
		}
	}
	cout << ans ;
	return 0 ;
}
