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
	long long k, a, b;
	cin >> k >> a >> b;
	if(a < k && b < k){
		puts("-1");
	}else{
		if(a < k){
			if(b % k > 0){
				puts("-1");
				return 0;
			}
			cout << b / k << endl;
		}else if(b < k){
			if(a % k > 0){
				puts("-1");
				return 0;
			}
			cout << a / k << endl;
		}else{
			cout <<  a/k + b/k << endl;
		}
	}
	return 0;
}
