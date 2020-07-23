#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

int main () {
	int n ;
	cin >> n ;
	vector <long long int> v (n) ;
	for (int i = 0 ; i < n ; ++i) {
		cin >> v[i] ;
	}
	sort(v.begin() , v.end()) ;
	long long int mx = v[n-1] ;
	long long int sec_mx = v[n-2] ;
	long long int ans = mx * sec_mx ;
	cout << ans ;
	return 0 ;
}
