#include<iostream>
using namespace std ;
int main () {
	int k ;
	cin >> k ;
	int n_2 = 0 , n_1 = 1 ;
	int n ;
	for (int i = 2 ; i <= k ; ++i) {
		n = (n_1 + n_2) % 10 ;
		n_2 = n_1 ;
		n_1 = n ;
	}
	cout << n ;
	return 0 ;
}
