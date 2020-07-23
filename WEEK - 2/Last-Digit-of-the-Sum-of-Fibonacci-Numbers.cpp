#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define vi vector<int>

ll solve(ll n) {
	if (n <= 1) {
		return n ;
	}
	ll times = n / 60 ;
	int rem = n % 60 ;
    vi ans ;
    ans.push_back(0) ;
    ans.push_back(1) ;
    ll sum = 1 ;
    while (1) {
        int sec_last = ans[ans.size()-2] ;
        int last = ans[ans.size()-1] ;
        ans.push_back((sec_last % 10 + last % 10) % 10) ;
        if(ans[ans.size()-2] == 0 &&  ans[ans.size()-1] == 1) {
            ans.pop_back() ;
            ans.pop_back() ;
            break ;
        }
        sum = (sum % 10 + sec_last % 10 + last % 10) % 10 ;
    }
    sum = ((sum % 10) * (times % 10)) % 10 ;
    if (rem != 0) {
        for (int i = 0 ; i <= rem ; ++i) {
        	sum = (sum % 10 + ans[i] % 10) % 10 ;
		}
	}
    return sum % 10 ;
}
int main() {
    ll n ;
    cin >> n ;
    cout << solve(n) ;
    return 0 ;
}
