#include<iostream>
using namespace std ;

int main () {
	long long a , b ;
	cin >> a >> b ;
	if (a < b) {
		long long temp = a ;
		a = b ;
		b = temp ;
	}
	while (b > 0) {
		long long temp = a % b ;
		a = b ;
		b = temp ;
	}
	cout << a ;
	return 0 ;
}
