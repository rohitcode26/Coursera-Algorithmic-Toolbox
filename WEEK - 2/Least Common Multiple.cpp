#include<iostream>
using namespace std ;

int main () {
	long long a , b ;
	cin >> a >> b ;
	long long n1 = a , n2 = b ;
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
	long long lcm = (n1*n2) / a ;
	cout << lcm ;
	return 0 ;
}
