#include <bits/stdc++.h>
using namespace std;
#define io                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
    #define _ << " " <<
int main()
{
    io;
    int n;
    int k=1;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        int ans=0;
        for(int i=a;i<=b;i++)
        {
            if(i%2!=0)
            {
                ans+=i;
            }
        }
        cout<<"Case" _ k<<":" _ ans<<endl;
        k++;
    }
    return 0;
}