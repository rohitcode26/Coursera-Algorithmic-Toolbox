#include <iostream>
using namespace std ;
int main () {
	int n ;
	cin >> n ;
	int c1 = n / 10 ;
	n %= 10 ;
	int c2 = n / 5 ;
	n %= 5 ;
	cout << c1 + c2 + n ;
	return 0 ;
}
