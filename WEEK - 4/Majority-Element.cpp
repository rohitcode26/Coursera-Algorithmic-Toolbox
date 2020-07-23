#include<bits/stdc++.h>
using namespace std ;

int main () {
	int n ;
	cin >> n ;
	map <int , int> hmp ;
	for (int i = 0 ; i < n ; ++i) {
		int a ;
		cin >> a ;
		++hmp[a] ;
	}
	for (auto &i : hmp) {
		if (i.second > n/2) {
			cout << 1 ;
			return 0 ;
		}
	}
	cout << 0 ;
	return 0 ;
}
