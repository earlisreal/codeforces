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
	int n, m;
	scanf("%d %d", &n, &m);
	vector<int> x;
	vector<int> y;
	vector<int> z;
	int ans = 1e5;
	char s[m + 7];
	for (int i = 0; i < n; ++i) {
		scanf("%s", s);
		int a, b, c;
		a = b = c = m;
		for (int j = 0; j <= m / 2; ++j) {
			if(isdigit(s[j])){
				a = min(a, j);
			}
			else if(isalpha(s[j])){
				b = min(b, j);
			}
			else{
				c = min(c, j);
			}
		}
		for (int j = 1; j <= m / 2; ++j) {
			if(isdigit(s[m - j])){
				a = min(a, j);
			}
			else if(isalpha(s[m - j])){
				b = min(b, j);
			}
			else{
				c = min(c, j);
			}
		}
		x.pp(a);
		y.pp(b);
		z.pp(c);
	}

	/* for (int i = 0; i < n; ++i) { */
	/* 	printf("%d %d %d\n", x[i], y[i], z[i]); */
	/* } */

	for (int i = 0; i < n; ++i) {
		int f = m;
		int foo = -1;
		if(x[i] != m){
			for (int j = 0; j < n; ++j) {
				if(i == j){
					continue;
				}
				if(y[j] < f){
					foo = j;
					f = y[j];
				}
			}
			x[i] += f;
			f = m;
			for (int j = 0; j < n; ++j) {
				if(i == j || foo == j){
					continue;
				}
				if(z[j] < f){
					f = z[j];
				}
			}
			x[i] += f;
			ans = min(ans, x[i]);
		}
		f = m;
		foo = -1;
		if(y[i] != m){
			for (int j = 0; j < n; ++j) {
				if(i == j){
					continue;
				}
				if(x[j] < f){
					foo = j;
					f = x[j];
				}
			}
			y[i] += f;
			f = m;
			for (int j = 0; j < n; ++j) {
				if(i == j || foo == j){
					continue;
				}
				if(z[j] < f){
					f = z[j];
				}
			}
			y[i] += f;
			ans = min(ans, y[i]);
		}
		f = m;
		foo = -1;
		if(z[i] != m){
			for (int j = 0; j < n; ++j) {
				if(i == j){
					continue;
				}
				if(x[j] < f){
					foo = j;
					f = x[j];
				}
			}
			z[i] += f;
			f = m;
			for (int j = 0; j < n; ++j) {
				if(i == j || foo == j){
					continue;
				}
				if(y[j] < f){
					f = y[j];
				}
			}
			z[i] += f;
			ans = min(ans, z[i]);
		}
	}
	printf("%d\n", ans);
	return 0;
}
