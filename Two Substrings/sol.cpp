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
	char s[int(1e5 + 5)];
	scanf("%s", s);
	int len = strlen(s);
	vector<int> a, b;
	for (int i = 0; i < len - 1; ++i) {
		if(s[i] == 'A' && s[i+1] == 'B'){
			a.pp(i);
		}
		if(s[i] == 'B' && s[i+1] == 'A'){
			b.pp(i);
		}
	}
	/* for (int i = 0; i < a.size(); ++i) { */
	/* 	printf("%d ", a[i]); */
	/* } */
	/* printf("\n"); */
	/* for (int i = 0; i < b.size(); ++i) { */
	/* 	printf("%d ", b[i]); */
	/* } */
	for (int i = 0; i < a.size(); ++i) {
		for (int j = 0; j < b.size(); ++j) {
			if(abs(a[i] - b[j]) != 1){
				puts("YES");
				return 0;
			}
		}
	}
	puts("NO");
	return 0;
}
