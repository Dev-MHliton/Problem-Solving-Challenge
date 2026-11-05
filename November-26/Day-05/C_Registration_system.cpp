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

    unordered_map<string, int> mp;

    while (n--)
    {
        string s;
        cin >> s;

        if (mp.find(s) == mp.end())
        {
            cout << "OK\n";
            mp[s] = 1;
        }
        else
        {
            cout << s << mp[s] << '\n';
            mp[s]++;
        }
    }

    return 0;
}