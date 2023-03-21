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
    string s1, s2;
    cin >> s1 >> s2;
    int l = 0, r = 0, cnt = 0;
    while (r != s2.size())
    {
        if (s1[l] == s2[r])
        {
            l++;
            r++;
            cnt++;
        }
        else
        {
            r++;
        }
    }
    if (cnt == s1.size())
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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
    }
    return 0;
}
