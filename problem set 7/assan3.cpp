#include <bits/stdc++.h>
using namespace std;

#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopb(i,a,b) for(int i=a;i>=b;i--)
#define fore(name)  for(auto it=name.begin();it!=name.end();it++)
#define w  int t;cin>>t;while(t--)
#define pb(x) push_back(x)
#define in(y) insert(y)
#define bitscount 32
#define make(x,y) make_pair(x,y)
#define LOAD_FACTOR_set(name) name.reserve(32768);name.max_load_factor(0.25);
#define LOAD_FACTOR_map(name) name.reserve(1024);name.max_load_factor(0.25);
#define lcm(a,b) ((a*b))/(__gcd(a,b))
#define int long long int
#define REDBULL ios_base::sync_with_stdio(false);cin.tie(NULL);
#define mod 1000000007
#define endl "\n"
#define all(x) (x).begin(), (x).end()
#define MAX 200001

vector<int> graph[MAX];
bool visited[MAX];
int weight[MAX];
int ans;
void dfs(int u, int check)
{
	visited[u] = true;
	for (auto it : graph[u])
	{
		if (!visited[it] &&  __builtin_parity(weight[it]) == check)
		{
			ans++;
			dfs(it, check);
		}
	}
}
int32_t main()
{
	REDBULL
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		for (int i = 1; i <= n; i++)
		{

			visited[i] = false;
			graph[i].clear();
		}
		for (int i = 1; i <= n; i++ )
			cin >> weight[i];
		for (int i = 0; i < m; i++)
		{
			int u, v;
			cin >> u >> v;
			graph[u].pb(v);
			graph[v].pb(u);
		}

		// evenP stores the size of the largest connected
		// group having the parity of all nodes as even

		// oddP stores the size of largest connected
		// group having the parity of all nodes as odd
		int evenP = 0, oddP = 0;
		for (int i = 1; i <= n; i++)
		{
			if (!visited[i])
			{
				if ( __builtin_parity(weight[i]) == false)
				{
					ans = 1;
					dfs(i, 0);
					evenP = max(evenP, ans);
				}
				else {
					ans = 1;
					dfs(i, 1);
					oddP = max(oddP, ans);
				}
			}
		}

		int q;
		cin >> q;
		while (q--)
		{
			int c, k;
			cin >> c >> k;
			if (c == 1)
			{
				if (__builtin_parity(k))
					cout << evenP << endl;

				else
					cout << oddP << endl;

			}
			else
			{
				if (__builtin_parity(k))
					cout << oddP << endl;

				else
					cout << evenP << endl;
			}
		}


	}



	return 0;
}
