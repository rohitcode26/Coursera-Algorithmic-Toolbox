#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define vi vector<int>

ll solve(ll n , ll m) {
	if (n <= 1) {
		return n ;
	}
    vi ans ;
    ans.push_back(0) ;
    ans.push_back(1) ;
    while (1) {
        int sec_last = ans[ans.size()-2] ;
        int last = ans[ans.size()-1] ;
        ans.push_back((sec_last % m + last % m) % m) ;
        if(ans[ans.size()-2] == 0 &&  ans[ans.size()-1] == 1) {
            ans.pop_back() ;
            ans.pop_back() ;
            break ;
        }
    }
    int sz = ans.size() ;
    int res = n % sz ;
    return ans[res] % m ;
}
int main() {
    ll n , m ;
    cin >> n >> m ;
    cout << solve(n , m) ;
    return 0 ;
}
