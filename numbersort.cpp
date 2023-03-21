#include <bits/stdc++.h>
using namespace std;
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
#define _ << " " <<
#define maxn 0x3f3f3f3f
#define minn 0xc0c0c0c0
typedef long long ll;
typedef pair<ll, ll> pll;

int bubble(string s)
{
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        bool flag = false;
        for (int j = 0; j < s.size() - i - 1; j++)
        {
            if (s[j] > s[j + 1])
            {
                swap(s[j], s[j + 1]);
                cnt++;
                flag = true;
            }
        }
        if (!flag)
            break;
    }
    return cnt;
}
void solve()
{
    int c, r;
    cin >> c >> r;
    priority_queue<pll, vector<pll>, greater<pll>> pq; // from small to large
    vector<string> v(r);
    for (int i = 0; i < r; i++)
        cin >> v[i];
    for (int i = 0; i < r; i++)
    {
        pq.push({bubble(v[i]), i});
    }
    while (!pq.empty())
    {
        cout << v[pq.top().second] << endl;
        pq.pop();
    }
}

int main()
{
    IO;
    int T;
    cin >> T;
    while (T--)
    {
        solve();
        if (T != 0)
            getchar(); // eat the newline
    }
    return 0;
}
