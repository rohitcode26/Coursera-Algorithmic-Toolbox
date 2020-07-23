#include <bits/stdc++.h>
using namespace std ;
int main () {
	int n ;
	cin >> n ;
	if (n <= 2) {
		cout << 1 << '\n' << n ;
		return 0 ;
	}
	vector <int> ans ;
	int last = 0 ;
	int sum = 0 ;
	while (1) {
		++last ;
		if (n - sum - last == 0) {
			ans.push_back(last) ;
			break ;
		}
		if (n - sum - last <= last) {
			continue ;
		}
		sum += last ;
		ans.push_back(last) ;
	}
	cout << ans.size() << '\n' ;
	for (auto &i : ans) {
		cout << i << ' ' ;
	}
}
