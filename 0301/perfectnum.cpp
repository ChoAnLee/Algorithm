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

int add(int a)
{
    int sum =0;
    for(int i=1 ; i<a ; i++)
    {
        if(a%i==0)
            sum+=i;
    }
    return sum;
}
void solve()
{
    unsigned long n;
    cin >> n;
    if (n == add(n))
        cout << n << " ";
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
