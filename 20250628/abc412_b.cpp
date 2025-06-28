#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int init()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    return 0;
}

int main()
{
    init();

    string S, T;
    cin >> S >> T;

    for (ll i = 1; i < S.size(); i++)
    {
        if (isupper(S.at(i)))
        {
            if (T.find(S.at(i - 1)) == string::npos)
            {
                cout << "No" << endl;

                return 0;
            }
        }
    }

    cout << "Yes" << endl;

    return 0;
}
