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

    int N, K;
    cin >> N >> K;

    vector<int> h(N);
    rep(i, N)
    {
        cin >> h.at(i);
    }

    vector<int> dp(N, INT_MAX);

    dp.at(0) = 0;

    rep(i, N)
    {

        for (int j = 1; j <= K; j++)
        {
            if (i + j < N)
            {
                dp.at(i + j) = min(dp.at(i + j), dp.at(i) + abs(h.at(i + j) - h.at(i)));
            }
        }
    }

    cout << dp.at(N - 1) << endl;

    return 0;
}
