#include <bits/stdc++.h>

using namespace std;

#define swap(a,b) (a)^=(b)^=(a)^=(b)
#define endl '\n'
#define int long long

using pii = pair<int, int>;

const double EPS = 1e-9;
const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int32_t main()
{
	cin.sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector<pii> v(n);
	for(int i=0;i<n;i++)
	{
		cin >> v[i].first >> v[i].second;
	}
	stack<int> st;
	int ans = 0;
	for(int i=0;i<n;i++)
	{
		while(!st.empty() && st.top() > v[i].second)
		{
			ans++;
			st.pop();
		}
		if(v[i].second == 0) continue;
		if(st.empty() || st.top() < v[i].second)
		{
			st.push(v[i].second);
		}
	}
	cout << ans + st.size();
	return 0;
}