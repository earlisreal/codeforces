#include <bits/stdc++.h>

#define maxn 100000008
#define pp push_back
#define pf push_front
#define mp make_pair
#define fs first
#define sc second
#define ll long long
#define ull unsigned long long

using namespace std;

int main(int argc, char *argv[])
{
	int a[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int m, d;
	scanf("%d %d", &m, &d);
	int foo = a[m-1] - (7 - d + 1);
	int ans = ceil(float(foo) / 7) + 1;
	printf("%d\n", ans);
	return 0;
}