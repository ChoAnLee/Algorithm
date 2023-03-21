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

int solve(int n)
{
    if (n == 0 || n == 1)
        return n;
    int a = 0, b = 1, c = 0;
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main()
{
    IO;
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}
