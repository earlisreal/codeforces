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
	int n, k, a, b;
	scanf("%d %d %d %d", &n, &k, &a, &b);
	int mn = min(a, b);
	int mx = max(a, b);
	char x, y;
	if(a > b){
		x = 'G';
		y = 'B';
	}else{
		x = 'B';
		y = 'G';
	}
	int foo = ceil((float)mx /(mn + 1));
	/* printf("foo -> %d\n", foo); */
	/* return 0; */
	if(foo > k)puts("NO");
	else{
		int p = mx / k;
		int q = mn / k;
		if(mn > 0)
			foo = mx /mn;
		while(mx > 0 || mn > 0){
			if(mx < 1 && mn > 0){
				if(mn > k){
					cout << "mali na :(" << endl;
					break;
				}
			}
			if(mx > 0 && mn < 1){
				if(mx > k){
					cout << "mali na :(" << endl;
					break;
				}
			}
			for (int i = 0; i < foo && mx > 0; ++i) {
				printf("%c", x);
				mx--;
			}
			if(mn > 0){
				printf("%c", y);
				mn--;
			}
		}
	}
	return 0;
}
