#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        long long page = 0;
        long long temp = 0;
        while (temp <= a)
        {
            ++page;
            temp += page;
        }
        cout << page << " " << temp - a << '\n';
    }
    return 0;
}
