#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (n == 1)
        cout << -1 << "\n";
    else
    {
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                b[i] = i + 1;
            }
            else if (a[i] != i + 1)
            {
                b[i] = i + 1;
            }
            else
            {
                int temp = i + 2;
                b[i] = temp;
                temp -= 1;
                i++;
                b[i] = temp;
            }
        }

        if (b[n - 1] == a[n - 1])
        {
            int temp = b[n - 1];
            b[n - 1] = b[n - 2];
            b[n - 2] = temp;
        }

        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}