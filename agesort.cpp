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

void quick_sort(vector<int> &, int, int);

int main()
{

    int n;
    while (cin >> n && n != 0)
    {
        vector<int> v;
        while (n--)
        {
            int t;
            cin >> t;
            v.push_back(t);
        }
        quick_sort(v, 0, v.size() - 1);
        for (int i = 0; i < v.size(); i++)
            if (i == v.size() - 1)
                cout << v[i] << endl;
            else
                cout << v[i] << " ";
    }
    return 0;
}

void quick_sort(vector<int> &v, int start, int end)
{
    if (start >= end)
        return;
    int i = start;
    int j = end - 1;
    int key = v[end];
    while (true)
    {
        while (v[i] < key && v[i] != key)
            i++;
        while (v[j] >= key && j != 0)
            j--;
        if (i >= j)
            break;
        swap(v[i], v[j]);
    }
    swap(v[i], v[end]);
    quick_sort(v, start, i - 1);
    quick_sort(v, i + 1, end);
}