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

const int N = 1e6 + 7;

vector<int> v[N];

bool vis[N];
bool vis2[N];
int t[N];
int dp[N];

vector<int> ans;

int f;

int dfs(int s){
	vis[s] = true;
	int sum = t[s];
	for (int i = 0; i < v[s].size(); ++i) {
		if(!vis[v[s][i]]){
			sum += dfs(v[s][i]);
		}
	}
	if(sum == f){
		ans.pp(s);
	}
	if(sum == 2 * f){
		ans.pp(s);
	}
	return dp[s] = sum;
}

bool check = false;

int solve(int s){
	vis2[s] = true;
	int sum = t[s];
	for (int i = 0; i < v[s].size(); ++i) {
		if(!vis2[v[s][i]]){
			sum += solve(v[s][i]);
		}
	}
	if(sum == f){
		check = true;
	} 
	return sum;
}

int main(int argc, char *argv[])
{
	int n, s;
	scanf("%d", &n);
	int sum = 0;
	for (int i = 1; i <= n; ++i) {
		int x;
		scanf("%d %d", &x, &t[i]);
		if(x == 0){
			s = i;
		}else{
			v[x].pp(i);
		}
		sum += t[i];
	}

	if(sum % 3 != 0){
		puts("-1");
		return 0;
	}

	f = sum / 3;

	dfs(s);

	int a = 0, b = 0;

	vector<int> foo;
	int bar = 0;

	for (int i = 1; i <= n; ++i) {
		if(dp[i] == f){
			a++;
			foo.pp(i);
		} 
		if(dp[i] == f * 2){
			b++;
			bar = i;
		} 
	}

	if(a == 2){
		printf("%d %d\n", foo[0], foo[1]);
	}else if(a == 1 && b == 1){
		solve(bar);
		if(check){
			printf("%d %d\n", foo[0], bar);
		}else{
			puts("-1");
		}
	}else{
		puts("-1");
	}

/* 	if(ans.size() >= 2){ */
/* 		printf("%d %d\n", ans[0], ans[1]); */
/* 	}else{ */
/* 		puts("-1"); */
/* 	} */

	return 0;
}