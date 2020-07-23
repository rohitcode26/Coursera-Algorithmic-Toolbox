#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define vi vector<int>

ll solve (ll n , ll m) {
	vi ans ;
	ans.push_back(0) ;
	ans.push_back(1) ;
	while (1) {
		int sec_last = ans[ans.size()-2] ;
		int last = ans[ans.size()-1] ;
		ans.push_back((sec_last + last) % 10) ;
		if (ans[ans.size()-1] == 1 && ans[ans.size()-2] == 0) {
			ans.pop_back() ;
			ans.pop_back() ;
			break ;
		}
	}
	if (m <= 1) {
		return ans[(n+2) % 60] - 1 ;
	}
	m %= 60 ;
	n %= 60 ;
	int res = ans[(n+2) % 60] - ans[(m+1) % 60] ;
	if (res < 0) {
		return res + 10 ;
	} else {
		return res ;
	}
}

int main() {
    ll n , m ;
    cin >> m >> n ;
    cout << solve (n , m) ;
    return 0 ;
}
