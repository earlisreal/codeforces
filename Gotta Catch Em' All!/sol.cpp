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

int a[200];

int main(int argc, char *argv[])
{
	string s = "Bulbbasaur";
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); ++i) {
		for (int j = 0; j < s.length(); ++j) {
			if(str[i] == s[j]){
				a[s[j] - 'A']++;
				break;
			}
		}
	}
	int ans = 1e5;
		ans = min(ans, a['B' - 'A']);
		ans = min(ans, a['b' - 'A']);
		ans = min(ans, a['a' - 'A'] / 2);
		ans = min(ans, a['u' - 'A'] / 2);
		ans = min(ans, a['r' - 'A']);
		ans = min(ans, a['s' - 'A']);
		ans = min(ans, a['l' - 'A']);
	printf("%d\n", ans);

	return 0;
}
