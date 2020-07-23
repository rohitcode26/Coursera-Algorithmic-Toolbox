#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std ;

struct item {
	int val , wght ;
	item (int val , int wght) : val(val) , wght(wght) {}
};

bool compare (struct item a , struct item b) {
	double ratio1 = double(a.val) / a.wght ;
	double ratio2 = double(b.val) / b.wght ;
	return ratio1 > ratio2 ;
}

int main () {
	int n , w ;
	cin >> n >> w ;
	vector <item> v ;
	for (int i = 0 ; i < n ; ++i) {
		int a , b ;
		cin >> a >> b ;
		v.push_back({a , b}) ;
	}
	sort(v.begin() , v.end() , compare) ;
	double ans = 0.0 ;
	int till_here = 0 ;
	for (int i = 0 ; i < n ; ++i) {
		if (till_here + v[i].wght <= w) {
			till_here += v[i].wght ;
			ans += v[i].val ;
			continue ;
		}
		int diff = w - till_here ;
		ans += v[i].val * ((double) diff / v[i].wght) ;
		break ;
	}
	cout << fixed << setprecision(10) << ans ;
}
