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

    string S;
    cin >> S;

    ll answer = 0;
    ll black_count = 0;

    rep(i, S.size())
    {
        if (S.at(i) == 'W')
        {
            answer += black_count;
        }
        else
        {
            black_count++;
        }
    }

    cout
        << answer << endl;

    return 0;
}
