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
	int n, a, b;
	scanf("%d %d %d", &n, &a, &b);
	if(n - a < b)
		printf("%d\n", 1);
	else
		printf("%d\n", n - a);
	return 0;
}
