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

    string s;
    cin >> s;

    string digit = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '+')
        {
            digit += s[i];
        }
    }
    sort(digit.begin(), digit.end());

    for (int i = 0; i < digit.size(); i++)
    {
        cout << digit[i];

        if (i < digit.size() - 1)
        {
            cout << "+";
        }
    }

    cout << endl;

    return 0;
}