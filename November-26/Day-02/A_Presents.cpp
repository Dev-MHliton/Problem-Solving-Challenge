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

    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }

    vector<int> ans(n + 1);

    for (int i = 0; i < n; i++)
    {
        ans[v[i]] = i + 1;
    }

    // Vector e direct ouput ber kora jay na ejnno loop use korte hoy.
    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}