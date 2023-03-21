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

void solve()
{
    string a;
    cin >> a;
    int ans = 0;
    if (a.size() == 1)
    {
        int b = a[0] - '@';
        cout << b << endl;
        return;
    }
    else
    {

        for (int i = 0; i < a.size(); ++i)
        {
            int c = a[i] - '@';
            ans += c * pow(26, a.size() - i - 1);
        }
        cout << ans << endl;
        return;
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
