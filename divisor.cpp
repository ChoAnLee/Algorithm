#include <bits/stdc++.h>
using namespace std;
int divisor_num(int n)
{
    if (n == 1)
        return 1;
    int sum = 0;
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            if (i == n / i)
                sum += 1;
            else
                sum += 2;
        }
    }
    return sum + 2;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        int maxn = 0;
        int temp = 0;
        for (int i = a; i <= b; ++i)
        {
            if (divisor_num(i) > maxn)
            {
                maxn = divisor_num(i);
                temp = i;
            }
        }
        cout << "Between " << a << " and " << b << ", " << temp << " has a maximum of " << divisor_num(temp) << " divisors." << '\n';
    }
    return 0;
}