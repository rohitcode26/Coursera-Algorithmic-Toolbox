#include<bits/stdc++.h>
using namespace std ;

int bs(int val , vector<int> &a , int n) {
	int hi = n-1 ;
	int lo = 0 ;
	while (lo <= hi) {
		int mid = hi+lo >> 1 ;
		if (a[mid] == val) {
			return mid ;
		} else if (a[mid] > val) {
			hi = mid - 1 ;
		} else {
			lo = mid + 1 ;
		}
	}
	return -1 ;
}

int main () {
	int n ;
	cin >> n ;
	vector<int> a(n) ;
	for (int i = 0 ; i < n ; ++i) {
		cin >> a[i] ;
	}
	int k ;
	cin >> k ;
	vector<int> b(k) ;
	for (int i = 0 ; i < k ; ++i) {
		cin >> b[i] ;
	}
	for (int i = 0 ; i < k ; ++i) {
		cout << bs(b[i] , a , n) << ' ' ;
	}
	return 0 ;
}
