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
	int n, k;
	scanf("%d %d", &n, &k);
	int a[n];
	int b[n];
	pair<int, int> p[n];
	for (int i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
	}
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		scanf("%d", &b[i]);
		sum += b[i];
	}
	for (int i = 0; i < n; ++i) {
		int x = a[i] - b[i];
		p[i] = mp(x, i);
	}
	sort(p, p+n);
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		if(p[i].fs < 0 || k > 0){
			k--;
			sum -= b[p[i].sc];
			ans += a[p[i].sc];
		}else{
			if(k < 1){
				break;
			}
		}
	}

	printf("%d\n", ans + sum);

	return 0;
}