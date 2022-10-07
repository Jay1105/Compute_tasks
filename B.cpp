#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    map<char, int> mp;

    char ans;

    for (int i = 0; i < a.size(); i++)
    {
        mp[a[i]]++;
    }
    for (int i = 0; i < b.size(); i++)
    {
        mp[b[i]]--;

        if (mp[b[i]] < 0)
            ans = b[i];
    }

    cout << ans << "\n";

    return 0;
}