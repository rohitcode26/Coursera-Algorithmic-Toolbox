#include <bits/stdc++.h>
using namespace std ;

bool cmp (int a , int b) {
	string one = to_string(a) ;
	string two = to_string(b) ;
	string a_then_b = one + two ;
	string b_then_a = two + one ;
	int u = stoi(a_then_b) ;
	int v = stoi(b_then_a) ;
	return u > v ;
}

int main () {
	int n ;
	cin >> n ; 
	vector <int> v (n) ;
	for (int i = 0 ; i < n ; ++i) {
		cin >> v[i] ;
	}
	sort (v.begin() , v.end() , cmp) ;
	for (int i = 0 ; i < n ; ++i) {
		cout << v[i] ;
	}
}
