#include <bits/stdc++.h>
#define min 0xc0c0c0c0
using namespace std;
int MCSS(int[], int, int);
int MCSS_dp(int[], int);
int main()
{
    int a[9] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << MCSS(a, 0, 8) << endl;
    cout << MCSS_dp(a, 9) << endl;
    return 0;
}
int MCSS(int a[], int l, int r)
{
    if (l == r)
        return a[l]; //return max(a[l],0); => 可空子序列
    int mid = (l + r) >> 1;
    int msl = MCSS(a, l, mid);
    int msr = MCSS(a, mid + 1, r);
    int mbl = min; //int mbl = 0; => 可空子序列
    int temp = 0;
    for (int i = mid - 1; i >= l; --i)
    {
        temp += a[i];
        if (temp > mbl)
            mbl = temp;
    }
    int mbr = min; //int mbr = 0 => 可空子序列
    int temp2 = 0;
    for (int i = mid; i <= r; ++i)
    {
        temp2 += a[i];
        if (temp2 > mbr)
            mbr = temp2;
    }
    return max(max(msl, msr), mbl + mbr);
}
int MCSS_dp(int a[], int n)
{
    int ans = a[0];
    int temp = a[0];
    for (int i = 1; i < n; ++i)
    {
        temp = max(temp + a[i], a[i]);
        ans = max(ans, temp);
    }
    return ans;
}
