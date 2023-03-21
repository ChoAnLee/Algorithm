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

bool isreverse(int a)
{
    string s = to_string(a);
    string t = s;
    reverse(t.begin(), t.end());
    if (s == t)
        return true;
    else
        return false;
}
int reverse_int(int a)
{
    string s = to_string(a);
    string t = s;
    reverse(t.begin(), t.end());
    return stoi(t);
}
void solve()
{
    int a;
    cin >> a;
    int cnt = 0;
    do
    {
        a += reverse_int(a);
        cnt++;
    } while (!isreverse(a));
    cout << cnt << " " << a << endl;
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
