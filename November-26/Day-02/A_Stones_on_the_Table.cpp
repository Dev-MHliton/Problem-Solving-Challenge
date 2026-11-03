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

    string s;
    cin >> s;

    int count = 0;

    for (int i = 0; i < n; i++)
    {

        if (s[i] == s[i + 1])
        {
            count++;
        }
    }
    cout << count << "\n";

    return 0;
}
