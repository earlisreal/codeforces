#include <bits/stdc++.h>

#define maxn 100000008
#define pp push_back
#define pf push_front
#define mp make_pair
#define fs first
#define sc second

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main(int argc, char *argv[])
{
	long long n, l, r;
	long long foo = 1;
	n = pow(2, 50);
	cin >> n >> l >> r;
	string s = "";
	vector<int> v;
	while(n > 1){
		v.pp(n%2);
		n /= 2;
	}
	long long total = n;
	long long ans1 = 0;
	foo = 1;
	l *= n;
	r *= n;
	for (int i = v.size() - 1; i >= 0; --i) {
		long long temp = foo + 1;
		foo = foo * 2 + 1;
		if(foo > l){
			for (int j = i; j >= 0; --j) {
				if(v[j] == 0){
					if(n == 1){
						l -= 2;
					}
				} 
			}
		}
		if(temp >= l){
			if(v[i] == 0 && n == 1) l--;
		}
	}
	foo = 1;
	for (int i = v.size() - 1; i >= 0; --i) {
		long long temp = foo + 1;
		foo = foo * 2 + 1;
		if(foo > r){
			for (int j = i; j >= 0; --j) {
				if(v[j] == 0){
					if(n == 1){
						r -= 2;
					}
				}else{
					if(n == 0){
						r += 2;
					}
				}
			}
		}
		if(temp >= r){
			if(v[i] == 0 && n == 1) r--;
		}

	}
	/* cout << l << endl; */
	/* cout << r << endl; */
	cout << r - l << endl;
	return 0;
}