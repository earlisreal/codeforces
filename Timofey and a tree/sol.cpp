#include <bits/stdc++.h>

#define maxn 100005
#define pp push_back
#define pf push_front
#define mp make_pair
#define fs first
#define sc second

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

vector<int> g[maxn];
int c[maxn];
bool vis[maxn];

int ans = 0;

int foo = -1;

int cnt = 0;

void dfs(int s){
	cnt++;
	vis[s] = true;
	int x = 0;
	for (int i = 0; i < g[s].size(); ++i) {
		if(!vis[g[s][i]]){
			//remove the vertex
			int temp = -1;
			for (int j = 0; j < g[s].size(); ++j) {
				if(c[s] != c[g[s][j]]){
					if(!vis[g[s][j]])
					x++;
					temp = g[s][j];
				}
			}
			if(x > 1){
				ans++;
				foo = s;
				return;
			}else if(x == 1){
				vis[temp] = true;
				foo = temp;
				ans++;
				return;

			}
			dfs(g[s][i]);
		}
	}
}

int main(int argc, char *argv[])
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n - 1; ++i) {
		int u, v;
		scanf("%d %d", &u, &v);
		g[u].pp(v);
		g[v].pp(u);
	}
	for (int i = 1; i <= n; ++i) {
		scanf("%d", &c[i]);
	}
	for (int i = 1; i <= n; ++i) {
		if(!vis[i]){
			dfs(i);
		}
	}
	/* printf("count -> %d\n", cnt); */
	puts(ans > 1 ? "NO" : "YES");
	if(ans < 2){
		if(foo == -1){
			printf("1");
		}
		else{
			printf("%d\n", foo);
		}
	}

	return 0;
}
