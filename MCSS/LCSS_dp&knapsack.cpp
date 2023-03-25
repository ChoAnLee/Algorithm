#include <bits/stdc++.h>
#define min 0xc0c0c0c0
using namespace std;

int sto[10][10];
int MCSS(int[], int, int);
int MCSS_dp(int[], int);
int LCSS_dp(string, string);
void print_LCSS(string, string, int, int);
int knapsack(int[], int[], int, int);
int main()
{
    int a[9] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    string s1 = "ABCBA";
    string s2 = "BDCA";
    int m = s1.size();
    int n = s2.size();
    int sto[m + 1][n + 1];
    int va[4] = {20, 30, 40, 10};
    int wa[4] = {6, 4, 5, 3};
    // cout << LCSS_dp(s1, s2) << endl;
    // print_LCSS(s1, s2, m, n);
    // cout << knapsack(va, wa, 4, 12) << endl;
    //  cout << MCSS(a, 0, 8) << endl;
    //  cout << MCSS_dp(a, 9) << endl;
    return 0;
}
int MCSS(int a[], int l, int r) // max continuous subsequence sum
{
    if (l == r)
        return a[l];
    int mid = (l + r) >> 1;
    int msl = MCSS(a, l, mid);
    int msr = MCSS(a, mid + 1, r);
    int mbl = min;
    int temp = 0;
    for (int i = mid - 1; i >= l; --i)
    {
        temp += a[i];
        if (temp > mbl)
            mbl = temp;
    }
    int mbr = min;
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
int LCSS_dp(string s1, string s2) // longest common subsequence
{
    int m = s1.size();
    int n = s2.size();
    int map[m + 1][n + 1];
    for (int i = 0; i <= m; ++i)
    {
        map[i][0] = 0;
    }
    for (int i = 0; i <= n; ++i)
    {
        map[0][i] = 0;
    }
    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j) // time complexity O(m*n)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                map[i][j] = map[i - 1][j - 1] + 1;
                sto[i][j] = 1; // 1 means from left-top
            }
            else if (map[i - 1][j] > map[i][j - 1])
            {
                map[i][j] = map[i - 1][j];
                sto[i][j] = 2; // 2 means from top
            }
            else // map[i-1][j] <= map[i][j-1]
            {
                map[i][j] = map[i][j - 1];
                sto[i][j] = 3; // 3 means from left
            }
        }
    return map[m][n];
}
void print_LCSS(string s1, string s2, int m, int n) // time complexity O(m+n) because the recursion tree is a binary tree, and the height is m+n
{
    if (m == 0 || n == 0)
        return;
    if (sto[m][n] == 1)
    {
        print_LCSS(s1, s2, m - 1, n - 1);
        cout << s1[m - 1];
    }
    else if (sto[m][n] == 2)
    {
        print_LCSS(s1, s2, m - 1, n);
    }
    else
    {
        print_LCSS(s1, s2, m, n - 1);
    }
}
int knapsack(int va[], int wa[], int n, int w) // time complexity O(n*w)
{
    int map[5][13];
    bool keep[5][13];
    for (int i = 0; i <= w; ++i)
        map[0][i] = 0;
    for (int i = 1; i <= n; ++i)
        for (int j = 0; j <= w; ++j)
        {
            if (wa[i] <= j && (va[i] + map[i - 1][j - wa[i]] > map[i - 1][j]))
            {
                map[i][j] = va[i] + map[i - 1][j - wa[i]];
                keep[i][j] = true;
            }
            else
            {
                map[i][j] = map[i - 1][j];
                keep[i][j] = false;
            }
        }
    int temp = w;
    for (int i = n; i > 0; --i)
    {
        if (keep[i][temp] == true)
        {
            cout << i << " ";
            temp -= wa[i];
        }
    }
    return map[n][w];
}
