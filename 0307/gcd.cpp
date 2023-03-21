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

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
void solve()
{
    int a, b;
    cin >> a >> b;
    int temp = gcd(a, b);
    cout << temp << endl;
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
