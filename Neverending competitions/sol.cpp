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
	int n;
	scanf("%d", &n);
	string s;
	cin >> s;
	int a = 0, b= 0;
	for (int i = 0; i < n; ++i) {
		string t;
		cin >> t;
		if(t.substr(0,3) == s){
			a++;
		}
		if(t.substr(5) == s){
			b++;
		}
	}
	if(a == b){
		puts("home");
	}else{
		puts("contest");
	}
	return 0;
}
