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
    int n;
    cin >> n;
    int a[n];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = n - 1; i > 0; i--)
    {
        bool swapped = false;
        for (int y = 0; y <= i - 1; y++)
        {
            if (a[y] > a[y + 1])
            {
                swap(a[y], a[y + 1]);
                cnt++;
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
    cout << "Optimal swapping takes " << cnt << " swaps." << endl;
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
