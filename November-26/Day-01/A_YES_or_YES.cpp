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

    while (n--)
    {
        string s;
        cin >> s;

        // If we use loop
        /*
          for (int i = 0; i < s.size(); i++)
          {
              s[i] = tolower(s[i]);
          }
        */

        // If we use transform function
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        if (s == "yes")
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}