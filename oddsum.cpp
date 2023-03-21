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

bool isprime(int n)
{
    int temp = sqrt(n);
    for (int i = 2; i <= temp; i++)
    {
        if (n % i == 0)
            return false; //
    }
    return true;
}
void solve()
{
    int a, b;
    cin >> a >> b;
    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        if (!isprime(i) && i % 2 != 0)
            sum += i;
    }
    cout << sum << endl;
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
