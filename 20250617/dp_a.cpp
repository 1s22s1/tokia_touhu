#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int init()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    return 0;
}

int main()
{
    init();

    int N;
    cin >> N;

    vector<int> h(N);
    rep(i, N)
    {
        cin >> h.at(i);
    }

    vector<ll> dp(N, INT_MAX);
    dp.at(0) = 0;

    for (int i = 1; i < N; i++)
    {
        if (i == 1)
        {
            dp.at(1) = abs(h.at(1) - h.at(0));
        }
        else
        {
            dp.at(i) = min(dp.at(i - 2) + abs(h.at(i) - h.at(i - 2)), dp.at(i - 1) + abs(h.at(i) - h.at(i - 1)));
        }
    }

    cout << dp.at(N - 1) << endl;

    return 0;
}
