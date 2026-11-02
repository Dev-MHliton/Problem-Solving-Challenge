
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

    string OriginalSong = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (i + 2 < s.size() && s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            if (!OriginalSong.empty() &&
                OriginalSong.back() != ' ')
            {
                OriginalSong += " ";
            }

            i += 2;
        }
        else
        {
            OriginalSong += s[i];
        }
    }

    if (!OriginalSong.empty() && OriginalSong.back() == ' ')
    {
        OriginalSong.pop_back();
    }

    cout << OriginalSong << endl;

    return 0;
}
