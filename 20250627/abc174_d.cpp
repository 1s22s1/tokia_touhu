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

    ll N;
    string S;

    cin >> N >> S;

    ll red_count = count(S.begin(), S.end(), 'R');

    ll answer = 0;

    for (ll i = 0; i < red_count; i++)
    {
        if (S.at(i) == 'W')
        {
            answer++;
        }
    }

    cout << answer << endl;

    return 0;
}
