#include <bits/stdc++.h>
using namespace std;

#define fastio()                 \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define pii pair<int, int>

int main()
{
    fastio();

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int EvenMisMatch = 0;
        int OddMisMatch = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (i % 2 == 0 && x % 2 != 0)
            {
                EvenMisMatch++;
            }
            else if (i % 2 != 0 && x % 2 == 0)
            {
                OddMisMatch++;
            }
        }

        if (EvenMisMatch == OddMisMatch)
        {
            cout << EvenMisMatch << "\n";
        }
        else
            cout << "-1\n";
    }

    return 0;
}