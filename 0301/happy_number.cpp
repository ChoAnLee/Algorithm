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
    int a;
    cin >> a;
    int temp = a;
    vector<int> v;
    v.push_back(a);
    while (temp != 1)
    {
        string b = to_string(temp);
        temp = 0;
        for (auto i : b)
            temp += pow((i - '0'), 2);
        auto i = find(v.begin(), v.end(), temp);
        if (temp < 10 && temp != 1)
        {
            cout << "Not Happy" << endl;
            return;
        }
        if (i == v.end())
            v.push_back(temp);
        else
        {
            cout << "Not Happy" << endl;
            return;
        }
    }
    cout << "Happy" << endl;
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
